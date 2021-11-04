#include<stdio.h>
#include <iostream>
#include <string.h>
#include<algorithm>
#include<stack>
using namespace std;
struct Node {
    char data[100];
    Node* left;
    Node* right;
};

int tot = 0;
const char* ss[];
void Create(Node*& T);
void Pre(Node* T);
void Mid(Node* T);
void Post(Node* T);

void ProOrder(Node* pRoot)
{
    if (pRoot == NULL)
        return;
    Node* p = pRoot;
    stack<Node*>s;

    while (p != NULL || !s.empty())
    {
        while (p != NULL)
        {
            s.push(p);
            cout << p->data << " ";
            p = p->left;
        }
        if (!s.empty())
        {
            p = s.top();
            s.pop();
            p = p->right;
        }
    }
}

void midOrder(Node* pRoot)
{
    if (pRoot == NULL)
        return;
    Node* p = pRoot;
    stack<Node*>s;
    while (p != NULL || !s.empty())
    {
        while (p != NULL)
        {
            s.push(p);
            p = p->left;
        }
        if (!s.empty())
        {
            p = s.top();
            cout << p->data << " ";		//第二次遇见的时候输出
            s.pop();
            p = p->right;
        }
    }
}

void postorder(Node* pRoot)
{
	if (pRoot == NULL) return;
	stack<Node*>s;
	Node* cur = pRoot, *pre = NULL;
	s.push(pRoot);
	while (!s.empty())
	{
		cur = s.top();
		if ((cur->left == NULL&&cur->right == NULL) ||
			((pre == cur->left || pre == cur->right) && pre != NULL))
		{
			cout << cur->data << " ";
			s.pop();
			pre = cur;
		}
		else
		{
			if (cur->right != NULL)
				s.push(cur->right);
			if (cur->left != NULL)
				s.push(cur->left);
		}
	}
}

int main()
{

    //freopen("in.in", "r", stdin);
    Node* T;
    Create(T);
    printf("先序遍历\n");
    Pre(T);
    printf("\n中序遍历\n");
    Mid(T);
    printf("\n后序遍历\n");
    Post(T);
    //---------------------------------
    printf("先序遍历\n");
    ProOrder(T);
    printf("\n中序遍历\n");
    midOrder(T);
    printf("\n后序遍历\n");
    postorder(T);

    return 0;
}

void Create(Node*& T)//先序次序输入二叉树中节点
{
    char ch[100];
    strcpy(ch, ss[tot++]);

    if (strcmp(ch, "#") == 0)
        return;
    T = new Node();
    //T->data = ch;
    strcpy(T->data, ch);
    //printf("***%c",T->data);
    Create(T->left);
    Create(T->right);
}
void Pre(Node* T)
{
    if (T != NULL)
    {
        printf("%s ", T->data);
        Pre(T->left);
        Pre(T->right);
    }
}
void Mid(Node* T)
{
    if (T != NULL)
    {
        Mid(T->left);
        printf("%s ", T->data);
        Mid(T->right);
    }
}
void Post(Node* T)
{
    if (T != NULL)
    {
        Post(T->left);
        Post(T->right);
        printf("%s ", T->data);
    }
}

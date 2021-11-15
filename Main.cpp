#include<cstdlib>
#include<cstdio>
#include<cstring>
#include"list.h"
#include<graphics.h>
#include<conio.h>
#include<Windows.h>
using namespace std;

void show(node* pnode) {

	for (int i = 0; i <= 5; i++) {
		setcolor(pnode->data.col);
		outtextxy(pnode->data.x, pnode->data.y - i * 20, pnode->data.ch[i]);
	}
}

void move(node* pnode) {
	pnode->data.y++;
}

int main() {
	char s[10] = "uGgnoD";

	initgraph(1200, 800);
	setbkcolor(LIGHTGRAY);//����������ɫ

	list* plist;  //����һ������
	listinit(&plist);

	int t = 1000000;
	while (t--) {
		BeginBatchDraw();
		node* pnode;
		pnode = (node*)malloc(sizeof(node));//����һ���ڵ�
		pnode->data.x = rand() % 1200;
		pnode->data.y = 0;
		pnode->data.col = RGB(rand() % 255, rand() % 255, rand() % 255);
		for (int i = 0; i < 7; i++) 	pnode->data.ch[i] = s[i];
		pnode->pnext = NULL;

		insert(plist, pnode);//����

		Traverlist(plist, show);
		Traverlist(plist, move);
		EndBatchDraw();
		//Sleep(250);
	}
	free(plist);
	return 0;
}
#include"list.h"
#include<cstdlib>
#include<algorithm>
using namespace std;

int listinit(list** pplist) {//pplist->plist
	*(pplist) = (list*)malloc(sizeof(list));
	if (NULL == *pplist)return 0;
	else {
		(*pplist)->pfront = NULL;
		(*pplist)->prear = NULL;
		(*pplist)->count = 0;
	}
	return 1;
}

int isempty(list* plist) {
	if (plist->count)return 0;
	else return 1;
}

void insert(list* plist, node* pnode) {

	if (isempty(plist))
		plist->pfront = pnode;
	else
		plist->prear->pnext = pnode;

	plist->prear = pnode;
	plist->count++;
}


//留接口
//    函数名       遍历对象      函数指针      这个函数的参数
void Traverlist(list* plist, void(*Traver)(node* pnode)) {//以我个人理解 就是在Traverlist中有两个参数，plist 和一个函数指针，在原函数调用参数里面的函数
	node* ptemp = plist->pfront;
	int listsize = plist->count;
	while (listsize) {
		Traver(ptemp);
		ptemp = ptemp->pnext;
		listsize--;
	}

}
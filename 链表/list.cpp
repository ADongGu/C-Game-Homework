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


//���ӿ�
//    ������       ��������      ����ָ��      ��������Ĳ���
void Traverlist(list* plist, void(*Traver)(node* pnode)) {//���Ҹ������ ������Traverlist��������������plist ��һ������ָ�룬��ԭ�������ò�������ĺ���
	node* ptemp = plist->pfront;
	int listsize = plist->count;
	while (listsize) {
		Traver(ptemp);
		ptemp = ptemp->pnext;
		listsize--;
	}

}
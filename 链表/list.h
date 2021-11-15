#pragma once

struct Data {
	int x, y;
	int col;
	char ch[20];
};

struct node {
	Data data;
	struct node* pnext;
};

struct list {
	node* pfront;
	node* prear;
	int count;
};
int listinit(list** pplist);
int isempty(list* plist);
void insert(list* plist, node* pnode);
void Traverlist(list* plist, void(*Traver)(node* pnode));
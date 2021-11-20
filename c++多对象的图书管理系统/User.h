#pragma once

#include "CD.h"
#include "Vedio.h"
#include "Book.h"
#include "Magazine.h"
#include "Advertising.h"
#include<iostream>
#include<string>
using namespace std;
const int MAXN = 30;			// ���洢����

class User 
{

private:
	int id;
	string name;
	string password;

public:

	int nbook, nmag, nved, ncd, nad;

	User() {
		nbook = nmag = nved = ncd = nad = 0;
		id = 0;
		name = ".";
		password = "111";
	}

	void setid(int i) { id = i; }
	int getid() { return id; }

	void setname(string i) { name = i; }
	string getname() { return name; }

	void setpassword(string i) { password = i; }
	string getpassword() { return password; }

	void input() {
		cout << "������id:";
		cin >> id;
		cout << "����������:";
		cin >> name;
		cout << "����������:";
		cin >> password;
	
	}

	void show() {
		cout << "id: " << id << "  name: " << name << "\n";
		printf("�飺%d\t��Ƶ��%d\tCD��%d\t��־��%d\t��棺%d\n", nbook, nved, ncd, nmag, nad);
	}

	int join()
	{
		while (1) 
		{
			printf("�������룺(Ĭ�ϡ�111��) \n");
			string in; cin >> in;
			if (in != password) {
				printf("�������\n");
				printf("����� ---> 0: �˳���½�� 1���鿴����\n");
				int op; cin >> op;
				if (!op) return 0;
				else cout << "����Ϊ�� " << getpassword() << "\n";
			}
			else {
				printf("��½�ɹ�~~\n");
				return 1;
			}
		}
	}
};
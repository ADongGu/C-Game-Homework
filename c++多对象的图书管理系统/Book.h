#pragma once

#include <iostream>
#include <string>
using namespace std;

class Book{
public:
	int flag;	//	�Ƿ񱻽�

	Book() {
		flag = 0;
		id = 0;
		name = "";
		use_name = "��";
	}

	Book& operator = (Book tem) {
		id = tem.getid();
		name = tem.getname();
		return *this;
	}

	void setid(int i) { id = i; }
	int getid() { return id; }

	void setname(string i) { name = i; }
	string getname() { return name; }

	void setuse(string i) { use_name = i; }
	string getusename() { return use_name; }

	void show() {
		cout << "��id: " << id << " " << "������" << name << " "<< "�����ˣ�" << use_name << "\n";
	}

	void input() {
		cout << "������id:";
		cin >> id;
		cout << "����������:";
		cin >> name;
	}

private:
	int id;			// ���
	string name;	// ����
	string use_name;  // ����������
};
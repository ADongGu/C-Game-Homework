#pragma once
#pragma once

#include <iostream>
#include <string>
using namespace std;

class Advertising {
public:
	int flag;	//	�Ƿ񱻽�

	void setid(int i) { id = i; }
	int getid() { return id; }

	void setname(string i) { name = i; }
	string getname() { return name; }

	void setuse(string i) { use_name = i; }
	string getusename() { return use_name; }

	Advertising() {
		id = 0;
		name = "";
		flag = 0;
		use_name = "��";
	}
	void show() {
		cout << "���id: " << id << " " << "�������" << name << "������" << "�����ˣ�" << use_name << "\n";
	}

	void input() {
		cout << "������id:";
		cin >> id;
		cout << "����������:";
		cin >> name;
	}
	Advertising& operator = (Advertising tem) {
		id = tem.getid();
		name = tem.getname();
		return *this;
	}

private:
	int id;			// ���
	string name;	// ����
	string use_name;
};
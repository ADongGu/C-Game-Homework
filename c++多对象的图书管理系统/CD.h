#pragma once

#include <iostream>
#include <string>
using namespace std;

class CD {
public:
	int flag;	//	�Ƿ񱻽�
	CD() {
		id = 0;
		name = "";
		flag = 0;
		use_name = "��";
	}
	void setid(int i) { id = i; }
	int getid() { return id; }

	void setname(string i) { name = i; }
	string getname() { return name; }

	void setuse(string i) { use_name = i; }
	string getusename() { return use_name; }

	
	void show() {
		cout << "CD_id: " << id << " " << "CD����" << name << "������" << "�����ˣ�" << use_name << "\n";
	}

	void input() {
		cout << "������id:";
		cin >> id;
		cout << "������CD��:";
		cin >> name;
	}
	CD& operator = (CD tem) {
		id = tem.getid();
		name = tem.getname();
		return *this;
	}

private:
	int id;			// ���
	string name;	// ����
	string use_name;
};
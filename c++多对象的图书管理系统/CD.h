#pragma once

#include <iostream>
#include <string>
using namespace std;

class CD {
public:
	int flag;	//	是否被借
	CD() {
		id = 0;
		name = "";
		flag = 0;
		use_name = "无";
	}
	void setid(int i) { id = i; }
	int getid() { return id; }

	void setname(string i) { name = i; }
	string getname() { return name; }

	void setuse(string i) { use_name = i; }
	string getusename() { return use_name; }

	
	void show() {
		cout << "CD_id: " << id << " " << "CD名：" << name << "数量：" << "借阅人：" << use_name << "\n";
	}

	void input() {
		cout << "请输入id:";
		cin >> id;
		cout << "请输入CD名:";
		cin >> name;
	}
	CD& operator = (CD tem) {
		id = tem.getid();
		name = tem.getname();
		return *this;
	}

private:
	int id;			// 编号
	string name;	// 名字
	string use_name;
};
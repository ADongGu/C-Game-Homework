#pragma once
#pragma once

#include <iostream>
#include <string>
using namespace std;

class Advertising {
public:
	int flag;	//	是否被借

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
		use_name = "无";
	}
	void show() {
		cout << "广告id: " << id << " " << "广告名：" << name << "数量：" << "借阅人：" << use_name << "\n";
	}

	void input() {
		cout << "请输入id:";
		cin >> id;
		cout << "请输入广告名:";
		cin >> name;
	}
	Advertising& operator = (Advertising tem) {
		id = tem.getid();
		name = tem.getname();
		return *this;
	}

private:
	int id;			// 编号
	string name;	// 名字
	string use_name;
};
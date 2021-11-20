#pragma once

#include <iostream>
#include <string>
using namespace std;

class Book{
public:
	int flag;	//	是否被借

	Book() {
		flag = 0;
		id = 0;
		name = "";
		use_name = "无";
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
		cout << "书id: " << id << " " << "书名：" << name << " "<< "借阅人：" << use_name << "\n";
	}

	void input() {
		cout << "请输入id:";
		cin >> id;
		cout << "请输入书名:";
		cin >> name;
	}

private:
	int id;			// 编号
	string name;	// 名字
	string use_name;  // 借阅人姓名
};
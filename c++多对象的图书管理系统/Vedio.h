#pragma once

#include <iostream>
#include <string>
using namespace std;

class Vedio{
public:
	int flag;	//	是否被借

	void setid(int i) { id = i; }
	int getid() { return id; }

	void setname(string i) { name = i; }
	string getname() { return name; }

	void setuse(string i) { use_name = i; }
	string getusename() { return use_name; }

	Vedio() {
		id = 0;
		name = "";
		flag = 0;
		use_name = "无";
	}
	void show() {
		cout << "视频id: " << id << " " << "视频名：" << name << "数量：" << "借阅人：" << use_name << "\n";
	}

	void input() {
		cout << "请输入id:";
		cin >> id;
		cout << "请输入视频名:";
		cin >> name;
	}
	Vedio& operator = (Vedio tem) {
		id = tem.getid();
		name = tem.getname();
		return *this;
	}
private:
	int id;			// 编号
	string name;	// 名字
	string use_name;
};
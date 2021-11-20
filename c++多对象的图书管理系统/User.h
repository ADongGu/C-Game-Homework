#pragma once

#include "CD.h"
#include "Vedio.h"
#include "Book.h"
#include "Magazine.h"
#include "Advertising.h"
#include<iostream>
#include<string>
using namespace std;
const int MAXN = 30;			// 最大存储数量

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
		cout << "请输入id:";
		cin >> id;
		cout << "请输入名字:";
		cin >> name;
		cout << "请输入密码:";
		cin >> password;
	
	}

	void show() {
		cout << "id: " << id << "  name: " << name << "\n";
		printf("书：%d\t视频：%d\tCD：%d\t杂志：%d\t广告：%d\n", nbook, nved, ncd, nmag, nad);
	}

	int join()
	{
		while (1) 
		{
			printf("输入密码：(默认“111”) \n");
			string in; cin >> in;
			if (in != password) {
				printf("输入错误\n");
				printf("你可以 ---> 0: 退出登陆， 1：查看密码\n");
				int op; cin >> op;
				if (!op) return 0;
				else cout << "密码为： " << getpassword() << "\n";
			}
			else {
				printf("登陆成功~~\n");
				return 1;
			}
		}
	}
};
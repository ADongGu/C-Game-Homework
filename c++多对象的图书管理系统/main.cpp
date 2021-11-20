#include "CD.h"
#include "Book.h"
#include "Vedio.h"
#include "Magazine.h"
#include "Advertising.h"
#include "Library.h"

#include<iostream>
#include<string>
using namespace std;
#include "User.h"

void table()
{
	printf("1: book\n");
	printf("2: cd\n");
	printf("3: vedio\n");
	printf("4: magazine\n");
	printf("5: advertising\n");
}

int main()
{

	Library L;

	while (1)
	{
		printf("1: 添加用户\n");
		printf("2：添加book\n");
		printf("3：添加cd\n");
		printf("4：添加vedio\n");
		printf("5：添加magazine\n");
		printf("6：添加advertising\n");

		printf("7：删除book\n");
		printf("8：删除cd\n");
		printf("9：删除vedio\n");
		printf("10：删除magazine\n");
		printf("11：删除advertising\n");
		
		printf("12: 借东西\n");
		printf("13: 还东西\n");

		printf("14: 显示用户\n");
		printf("15: 显示书\n");
		printf("16: 显示CD\n");
		printf("17: 显示广告\n");
		printf("18: 显示视频\n");
		printf("19: 显示杂志\n");

		printf("20: 退出系统\n");

		int op; cin >> op;
		if (op == 1) L.add_stu(); 
		if (op == 2) L.add_book();
		if (op == 3) L.add_cd();
		if (op == 4) L.add_vedio();
		if (op == 5) L.add_mag();
		if (op == 6) L.add_ad();

		if (op == 7) L.del_book();
		if (op == 8) L.del_cd();
		if (op == 9) L.del_vedio();
		if (op == 10) L.del_mag();
		if (op == 11) L.del_ad();

		if (op == 12)L.borrow();
		if (op == 13)L.back();

		if (op == 14)L.show_use();
		if (op == 15)L.show_book();
		if (op == 16)L.show_cd();
		if (op == 17)L.show_ad();
		if (op == 18)L.show_vedio();
		if (op == 19)L.show_mag();
		if (op == 20)break;
		system("pause");
		system("cls");
	}

	return 0;
}
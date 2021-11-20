#pragma once
#include "User.h"
#include "CD.h"
#include "Magazine.h"
#include "Vedio.h"
#include "Advertising.h"

#include<iostream>
#include<string>
using namespace std;
const int N = 1005;	

class Library {

private:
	User use[N];
	Book book[N];
	CD cd[N];
	Vedio vedio[N];
	Advertising ad[N];
	Magazine mag[N];

	int num_book, num_use, num_cd, num_vedio, num_ad, num_mag;

public:
	Library() {
		num_book = num_use = num_cd = num_vedio = num_ad = num_mag = 0;
	}
	void add_stu() {
		if (num_use >= N) {
			cout << "������˼ λ����!" << endl;
			return;
		}
		use[num_use].input();
		num_use++;
	}
	void add_book() 
	{
		if (num_book >= N) {
			cout << "������˼ λ����!" << endl;
			return;
		}
		book[num_book].input();
		num_book++;
	}
	void add_cd() {
		if (num_cd >= N) {
			cout << "������˼ λ����!" << endl;
			return;
		}
		cd[num_cd].input();
		num_cd++;
	}
	void add_vedio() {
		if (num_vedio >= N) {
			cout << "������˼ λ����!" << endl;
			return;
		}
		vedio[num_vedio].input();
		num_vedio++;
	}
	void add_ad() {
		if (num_ad >= N) {
			cout << "������˼ λ����!" << endl;
			return;
		}
		ad[num_ad].input();
		num_ad++;
	}
	void add_mag() {
		if (num_mag >= N) {
			cout << "������˼ λ����!" << endl;
			return;
		}
		mag[num_mag].input();
		num_mag++;
	}
	
	void del_book()
	{
		printf("��������id");
		int pos; cin >> pos;
		if (num_book <= pos) {
			cout << "������󣬴���������" << endl;
			return;
		}

		int f = 0;
		for (int i = 0; i < num_book; i++) {
			if (book[i].getid() == pos) {
				if (book[pos].flag) {
					cout << "�����У� ����ɾ��\n";
				}
				else {
					for (int j = i + 1; j < num_book; j++) {
						book[j - 1] = book[j];
					}
				}
				break;
			}
		}
		if (!f) {
			cout << "�����������Ʒ\n";
		}
	}
	void del_cd() {
		printf("���������±�");
		int pos; cin >> pos;
		if (num_cd <= pos) {
			cout << "������󣬴���������" << endl;
			return;
		}

		int f = 0;
		for (int i = 0; i < num_cd; i++) {
			if (cd[i].getid() == pos) {
				if (cd[pos].flag == 1) {
					cout << "�����У� ����ɾ��\n";
				}
				else {
					for (int j = i + 1; j < num_cd; j++) {
						cd[j - 1] = cd[j];
					}
				}
				break;
			}
		}
		if (!f) {
			cout << "�����������Ʒ\n";
		}
	}
	void del_vedio() {
		printf("���������±�");
		int pos; cin >> pos;
		if (num_vedio <= pos) {
			cout << "������󣬴���������" << endl;
			return;
		}
		int f = 0;
		for (int i = 0; i < num_vedio; i++) {
			if (vedio[i].getid() == pos) {
				if (vedio[pos].flag == 1) {
					cout << "�����У� ����ɾ��\n";
				}
				else {
					for (int j = i + 1; j < num_vedio; j++) {
						vedio[j - 1] = vedio[j];
					}
				}
				break;
			}
		}
		if (!f) {
			cout << "�����������Ʒ\n";
		}
	}
	void del_ad() {
		printf("���������±�");
		int pos; cin >> pos;
		if (num_ad <= pos) {
			cout << "������󣬴���������" << endl;
			return;
		}
		int f = 0;
		for (int i = 0; i < num_ad; i++) {
			if (ad[i].getid() == pos) {
				if (ad[pos].flag == 1) {
					cout << "�����У� ����ɾ��\n";
				}
				else {
					for (int j = i + 1; j < num_ad; j++) {
						ad[j - 1] = ad[j];
					}
				}
				break;
			}
		}
		if (!f) {
			cout << "�����������Ʒ\n";
		}
	}
	void del_mag() {
		printf("���������±�");
		int pos; cin >> pos;
		if (num_mag <= pos) {
			cout << "������󣬴���������" << endl;
			return;
		}
		int f = 0;
		for (int i = 0; i < num_mag; i++) {
			if (mag[i].getid() == pos) {
				if (mag[pos].flag == 1) {
					cout << "�����У� ����ɾ��\n";
				}
				else {
					for (int j = i + 1; j < num_mag; j++) {
						mag[j - 1] = mag[j];
					}
				}
				break;
			}
		}
		if (!f) {
			cout << "�����������Ʒ\n";
		}
	}

	void show_use() {
		for (int i = 0; i < num_use; i++)
			use[i].show();
	}
	void show_book() {
		for (int i = 0; i < num_book; i++)
			book[i].show();
	}
	void show_cd() {
		for (int i = 0; i < num_cd; i++)
			cd[i].show();
	}
	void show_ad() {
		for (int i = 0; i < num_ad; i++)
			ad[i].show();
	}
	void show_vedio() {
		for (int i = 0; i < num_vedio; i++)
			vedio[i].show();
	}
	void show_mag() {
		for (int i = 0; i < num_mag; i++)
			mag[i].show();
	}

	void borrow() {
		// �û���¼
		// ��ѯ��Ʒ״̬
		printf("�����û�id:\n");
		int use_id; cin >> use_id;
		int fu = 0;
		
		int pos = 0;
		for (int i = 0; i < num_use; i++)
		{
			if (use[i].getid() == use_id) {
				if (use[i].join()) {
					fu = 1;
					pos = i;
					break;
				}
			}
			else break;
		}

		if (!fu) {
			cout << "���ʵ���~�� ��ӭ�´�ʹ��...\n";
			return;
		}

		printf("1: book\n");
		printf("2: cd\n");
		printf("3: vedio\n");
		printf("4: magazine\n");
		printf("5: advertising\n");

		printf("Ҫ��ʲô���͵�...\n");
		int kind; cin >> kind;

		printf("��Ʒ���Ϊ:  \n");
		int ID; cin >> ID;
		int fw = 0;

		if (kind == 1) {
			for (int i = 0; i < num_book; i++) {
				if (book[i].getid() == ID) {
					fw = 1;
					if (book[i].flag) {
						cout << "������... �´�����\n";
					}
					else {
						book[i].flag = 1;
						book[i].setuse(use[pos].getname());
						printf("���ĳɹ�-----------\n");
						use[pos].nbook++;
					}
					break;
				}
			}
		}
		if (kind == 2) {
			for (int i = 0; i < num_cd; i++) {
				if (cd[i].getid() == ID) {
					fw = 1;
					if (cd[i].flag) {
						cout << "������... �´�����\n";
					}
					else {
						cd[i].flag = 1;
						cd[i].setuse(use[pos].getname());
						printf("���ĳɹ�-----------\n");
						use[pos].ncd++;
					}
					break;
				}
			}
		}
		if (kind == 3) {
			for (int i = 0; i < num_vedio; i++) {
				if (vedio[i].getid() == ID) {
					fw = 1;
					if (vedio[i].flag) {
						cout << "������... �´�����\n";
					}
					else {
						vedio[i].flag = 1;
						vedio[i].setuse(use[pos].getname());
						printf("���ĳɹ�-----------\n");
						use[pos].nved++;
					}
					break;
				}
			}
		}
		if (kind == 4) {
			for (int i = 0; i < num_mag; i++) {
				if (mag[i].getid() == ID) {
					fw = 1;
					if (mag[i].flag) {
						cout << "������... �´�����\n";
					}
					else {
						mag[i].flag = 1;
						mag[i].setuse(use[use_id].getname());
						printf("���ĳɹ�-----------\n");
						use[pos].nmag++;
					}
					break;
				}
			}
		}
		if (kind == 5) {
			for (int i = 0; i < num_ad; i++) {
				if (ad[i].getid() == ID) {
					fw = 1;
					if (mag[i].flag) {
						cout << "������... �´�����\n";
					}
					else {
						ad[i].flag = 1;
						ad[i].setuse(use[pos].getname());
						printf("���ĳɹ�-----------\n");
						use[pos].nad++;
					}
					break;
				}
			}
		}
		if (!fw) {
			cout << "û�и���ƷŶ �� ���²��Ұ�\n";
		}
	}
	void back() {
		printf("�����û�id:\n");
		int use_id; cin >> use_id;
		int fu = 0;

		int pos = 0;
		for (int i = 0; i < num_use; i++)
		{
			if (use[i].getid() == use_id) {
				if (use[i].join()) {
					fu = 1;
					pos = i;
					break;
				}
			}
			else break;
		}

		if (!fu) {
			cout << "���ʵ���~�� ��ӭ�´�ʹ��...\n";
			return;
		}

		printf("1: book\n");
		printf("2: cd\n");
		printf("3: vedio\n");
		printf("4: magazine\n");
		printf("5: advertising\n");

		printf("Ҫ��ʲô���͵�...\n");
		int kind; cin >> kind;

		printf("��Ʒ���Ϊ:  \n");
		int ID; cin >> ID;
		int fw = 0;

		if (kind == 1) {
			for (int i = 0; i < num_book; i++) {
				if (book[i].getid() == ID) {
					fw = 1;
					book[i].flag = 0;
					book[i].setuse("��");
					printf("����ɹ�-----------\n");
					use[pos].nbook--;
					break;
				}
			}
		}
		if (kind == 2) {
			for (int i = 0; i < num_cd; i++) {
				if (cd[i].getid() == ID) {
					fw = 1;
					cd[i].flag = 0;
					cd[i].setuse("��");
					printf("��cd�ɹ�-----------\n");
					use[pos].ncd--;
					break;
				}
			}
		}
		if (kind == 3) {
			for (int i = 0; i < num_vedio; i++) {
				if (vedio[i].getid() == ID) {
					fw = 1;
					vedio[i].flag = 0;
					vedio[i].setuse("��");
					printf("����ɹ�-----------\n");
					use[pos].nved--;
					break;
				}
			}
		}
		if (kind == 4) {
			for (int i = 0; i < num_mag; i++) {
				if (mag[i].getid() == ID) {
					fw = 1;
					mag[i].flag = 0;
					mag[i].setuse("��");
					printf("����ɹ�-----------\n");
					use[pos].nmag--;
					break;
				}
			}
		}
		if (kind == 5) {
			for (int i = 0; i < num_ad; i++) {
				if (ad[i].getid() == ID) {
					fw = 1;
					ad[i].flag = 0;
					ad[i].setuse("��");
					printf("����ɹ�-----------\n");
					use[pos].nad--;
					break;
				}
			}
		}
		if (!fw) {
			cout << "û�и���ƷŶ �� ���²��Ұ�\n";
		}
	}
	/*void back() {

		int use_id; cin >> use_id;
		int fu = 0;
		for (int i = 0; i < num_use; i++)
		{
			if (use[i].getid() == use_id) {
				if (use[use_id].join()) fu = 1;
			}
			else break;
		}

		if (!fu) {
			cout << "���ʵ���~�� ��ӭ�´�ʹ��...\n";
			return;
		}

		printf("1: book\n");
		printf("2: cd\n");
		printf("3: vedio\n");
		printf("4: magazine\n");
		printf("5: advertising\n");

		printf("Ҫ��ʲô���͵�...\n");
		int kind; cin >> kind;

		printf("��Ʒ���Ϊ:  \n");
		int ID; cin >> ID;
		int fw = 0;

		if (kind == 1) {
			for (int i = 0; i < num_book; i++) {
				if (book[i].getid() == ID) {
					fw = 1;
					if (book[i].flag) {
						cout << "������... �´�����\n";
					}
					else {
						book[i].flag = 1;
						book[i].setuse(use[use_id].getname());
					}
					break;
				}
			}
		}
		if (kind == 2) {
			for (int i = 0; i < num_cd; i++) {
				if (cd[i].getid() == ID) {
					fw = 1;
					if (cd[i].flag) {
						cout << "������... �´�����\n";
					}
					else {
						cd[i].flag = 1;
						cd[i].setuse(use[use_id].getname());
					}
					break;
				}
			}
		}
		if (kind == 3) {
			for (int i = 0; i < num_vedio; i++) {
				if (vedio[i].getid() == ID) {
					fw = 1;
					if (vedio[i].flag) {
						cout << "������... �´�����\n";
					}
					else {
						vedio[i].flag = 1;
						vedio[i].setuse(use[use_id].getname());
					}
					break;
				}
			}
		}
		if (kind == 4) {
			for (int i = 0; i < num_mag; i++) {
				if (mag[i].getid() == ID) {
					fw = 1;
					if (mag[i].flag) {
						cout << "������... �´�����\n";
					}
					else {
						mag[i].flag = 1;
						mag[i].setuse(use[use_id].getname());
					}
					break;
				}
			}
		}
		if (kind == 5) {
			for (int i = 0; i < num_ad; i++) {
				if (ad[i].getid() == ID) {
					fw = 1;
					if (mad[i].flag) {
						cout << "������... �´�����\n";
					}
					else {
						ad[i].flag = 1;
						ad[i].setuse(use[use_id].getname());
					}
					break;
				}
			}
		}
		if (!fw) {
			cout << "û�и���ƷŶ �� ���²��Ұ�\n";
		}
	}*/
};
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <windows.h>
#include "Poto.h"

using namespace std;
unsigned short int nz;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));

	int i, j;
	while (true)
	{
		cout << "������� ����� �������, 0 - ��� ������ "; 
		cin >> nz;

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*���������� ������� double f(double x, double y), ������� ��������� � ����������
			����� ���������� �������������� ������������, ����� ��� ������ ������� x � y
			��������.*/
			double x, y;
			x = (5.3f + rand() % 40) / (2.2f + rand() % 40);
			y = (5.3f + rand() % 40) / (2.2f + rand() % 40);
			cout << "������ �������������� ������������ �����: " << x << " � " << y << ", ���������� ����� " << f(x, y) << endl;
		}
		else if (nz == 2)
		{
			/*�������� ������� double f(double x1, double y1, double x2, double y2), �������
			��������� ���������� ����� ����� �������(xl, yl) �(x2, y2).*/
			double x1, y1, x2, y2;
			x1 = (5.3f + rand() % 40) / (2.2f + rand() % 40);
			y1 = (5.3f + rand() % 40) / (2.2f + rand() % 40);
			x2 = (5.3f + rand() % 40) / (2.2f + rand() % 40);
			y2 = (5.3f + rand() % 40) / (2.2f + rand() % 40);
			cout << "���������� ����� ����� ������� � ������������:\n";
			cout << "1 - " << x1 << ", " << y1 << endl;
			cout << "2 - " << x2 << ", " << y2 << endl;
			cout << " = " << f(x1, y1, x2, y2) << endl;
		}
		else if (nz == 3)
		{
			/*�������� ��������� ������� � ����� ������ int f(�) � � ������� ��������
			����������.����������������� ������ ������������� �������.*/
			f(1);
			f(1, 2);
			f(1, 2, 3);
		}
		else if (nz == 4)
		{
			/*�������� ������� swap(int* a, int* b), ������� �������� �������� ���������� a � b
			���, ��� ����� �������� a ����� ������� �������� b � ��������.*/
			int a = 5, b = 10;
			cout << "����� �� ���������\n";
			cout << a << " \t" << b << endl;
			swap(&a, &b);
			cout << "����� ����� ���������\n";
			cout << a << " \t" << b << endl;
		}
		else if (nz == 5)
		{
			/*�������� ������� swap(int& a, int& b), ������� �������� ��������
			���������� a � b ���, ��� ����� �������� a ����� ������� �������� b � ��������.*/
			int a = 1, b = 3;
			cout << "����� �� ���������\n";
			cout << a << " \t" << b << endl;
			swap(a, b);
			cout << "����� ����� ���������\n";
			cout << a << " \t" << b << endl;
		}
		else
		{
			cout << "������ ������� �� ���������� \n";
		}
	}
}
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
		cout << "Введите номер задания, 0 - для выхода "; 
		cin >> nz;

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*Определите функцию double f(double x, double y), которая вычисляет и возвращает
			длину гипотенузы прямоугольного треугольника, когда две другие стороны x и y
			известны.*/
			double x, y;
			x = (5.3f + rand() % 40) / (2.2f + rand() % 40);
			y = (5.3f + rand() % 40) / (2.2f + rand() % 40);
			cout << "Катеты прямоугольного треугольника равны: " << x << " и " << y << ", гипотенуза равна " << f(x, y) << endl;
		}
		else if (nz == 2)
		{
			/*Напишите функцию double f(double x1, double y1, double x2, double y2), которая
			вычисляет расстояние между двумя точками(xl, yl) и(x2, y2).*/
			double x1, y1, x2, y2;
			x1 = (5.3f + rand() % 40) / (2.2f + rand() % 40);
			y1 = (5.3f + rand() % 40) / (2.2f + rand() % 40);
			x2 = (5.3f + rand() % 40) / (2.2f + rand() % 40);
			y2 = (5.3f + rand() % 40) / (2.2f + rand() % 40);
			cout << "Расстояние между двумя точками с координатами:\n";
			cout << "1 - " << x1 << ", " << y1 << endl;
			cout << "2 - " << x2 << ", " << y2 << endl;
			cout << " = " << f(x1, y1, x2, y2) << endl;
		}
		else if (nz == 3)
		{
			/*Напишите несколько функций с одним именем int f(…) и с разными наборами
			параметров.Продемонстрируйте работу перегруженных функций.*/
			f(1);
			f(1, 2);
			f(1, 2, 3);
		}
		else if (nz == 4)
		{
			/*Напишите функцию swap(int* a, int* b), которая изменяет значения параметров a и b
			так, что новое значение a равно старому значению b и наоборот.*/
			int a = 5, b = 10;
			cout << "Числа до изменения\n";
			cout << a << " \t" << b << endl;
			swap(&a, &b);
			cout << "Числа после изменения\n";
			cout << a << " \t" << b << endl;
		}
		else if (nz == 5)
		{
			/*Напишите функцию swap(int& a, int& b), которая изменяет значения
			параметров a и b так, что новое значение a равно старому значению b и наоборот.*/
			int a = 1, b = 3;
			cout << "Числа до изменения\n";
			cout << a << " \t" << b << endl;
			swap(a, b);
			cout << "Числа после изменения\n";
			cout << a << " \t" << b << endl;
		}
		else
		{
			cout << "Такого задания не существует \n";
		}
	}
}
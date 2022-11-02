/*
 Лаба №5.1 A.cpp : 
 Написать программу, вычисляющую значение функции  для различных значений аргумента x, задавая его как целое число, как вещественное число с фиксированной точкой 
 и с плавающей точкой.
 
Обеспечить варианты: ввода данного с клавиатуры, инициализации данного в тексте программы. 
Выполнить задание, оформив его через функцию. 

 
 */ 


#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;


double f1(double x) {
	return ((sin(M_PI * pow(x, 2)) + log(pow(x, 2))) / (sin(M_PI * pow(x, 2)) + sin(x) + log(pow(x, 2)) + pow(x, 2) + pow(M_E, cos(x))));
}

double f2() {
	double x;
	cout << "Enter x "; cin >> x; cout << endl;
	return x;
}

void f3(double x) {
	cout << "y = " << x << endl;

}

int main()
{
	double p = f2();
	f3(f1(p));

}

// ivan 12.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//2. Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения:
//−1, если X < 0; 0, если X = 0; 1, если X > 0.
//С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B.



#include <iostream>
#include <cmath>
using namespace std;

int Sign(double x)
{
	if (x < 0)
	{
		return -1;
	}
	if (x == 0)
	{
		return 0;
	}

	return 1;

}

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, k;
	cout << "Введите, пожалуйста, A и B: " << endl;
	cin >> a >> b;
	k = Sign(a) + Sign(b);
	cout << k << endl;
	return 0;
}
#include <iostream>

/*
 *  Л/р 7 Функции
 * Пислегин Евгений Константинович ИВТ - 32
 * Написать функцию f(a,b,с), вычисляющую и
 * возвращающую количество корней квадратного
 * уравнения с коэффициентами a, b и с
*/

using namespace std;

int f(int a, int b, int c) {
	int d;
	d = b * b - 4 * a * c;
	if (d > 0)  return 2;
	else if (d == 0) return 1;
	else return 0;
}

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Введите 3 переменных квадратного уравнения a b c: ";
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	int res = f(a, b, c);
	cout << "Кол-во корней данного кв.уравнения: " << res;
}
﻿#include <iostream>

/*
 *  Л/р 7 Функции
 * Пислегин Евгений Константинович ИВТ - 32
 * Для любого задания лабораторных работ
 * № 5 и №6 реализовать ввод, 
 * формирование/обработку и вывод
 * массивов с применением функций.
*/

using namespace std;

int f() {
	setlocale(LC_ALL, "ru");

	size_t N;
	cout << "Укажите количество переменных: ";
	cin >> N;
	if (N <= 0) {
		cerr << "Ошибка: количество должно быть больше нуля." << endl;
		return 1;
	}

	/// Указатель на динамический массив
	int* a;
	//выделение памяти динамического массива
	a = new int[N];

	cout << "Введите N переменных:\n";
	for (size_t i = 0; i < N; i++) {
		cin >> a[i];
	}

	//Вывод элементов с чётными номерами в порядке возрастания номеров
	for (int i = 1; i < N; i += 2) {
		cout << a[i] << " ";
	}

	//Вывод элементов с нечётными номерами в порядке возрастания номеров
	for (int i = 0; i < N; i += 2) {
		cout << a[i] << " ";
	}
	// освобождение памяти динамического массива
	delete[] a;
	return 0;
}

int main()
{
	f();
}
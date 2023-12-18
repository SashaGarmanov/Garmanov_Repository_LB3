#include <iostream>

using namespace std;
/**
@file main.h
@brief Площадь и периметр прямоугольника
@copyright ВоГУ
@author Гарманов А.С
@date 10.12.2023
@version 1.0.0
*/


 /**
	Данная функция отмечает за ввод положительного числа А
	/brief	Ввод положительного числа
	/return number Возврат положительного числа
 */
int inputPositiveNumberA() {
	int number;

	do {
		cout << "Введите положительное число A: ";
		cin >> number;
	} while (number <= 0);

	return number;
}

/**
Данная функция отмечает за ввод положительного числа B
/brief	Ввод положительного числа
/return number Возврат положительного числа
*/

int inputPositiveNumberB() {
	int number;

	do {
		cout << "Введите положительное число B: ";
		cin >> number;
	} while (number <= 0);

	return number;
}

/**
Данная функция отмечает за нахождение площади прямоугольника
/brief	Площадь прямоугольника
/param length Длина прямоугольника
/param width Ширина прямоугольника
/return Площадь прямоугольника
*/


int calculateRectangleArea(int length, int width) {
	return length * width;
}

/**
Данная функция отмечает за нахождение периметра прямоугольника
/brief	Периметр прямоугольника
/param length Длина прямоугольника
/param width Ширина прямоугольника
/return Периметр прямоугольника
*/

int calculateRectanglePerimeter(int length, int width) {
	return 2 * (length + width);
}

int main() {
	int A, B, C;
	/**
	A- Длина прямоугольника
	B- Ширина прямоугольника
	C- Для выбора в меню
	*/
	cout << "1. Ввести положительное число А" << endl;
	cout << "2. Ввести положительное число B" << endl;
	cout << "3. Найти площадь прямоугольника" << endl;
	cout << "4. Найти периметр прямоугольника" << endl;

	do {
		cin >> C;
		switch (C) {
		case 1:
			A = inputPositiveNumberA();
			break;
		case 2:
			B = inputPositiveNumberB();
			break;
		case 3:
			cout << "Площадь прямоугольника: " << calculateRectangleArea(A, B) << endl;
			break;
		case 4:
			cout << "Периметр прямоугольника: " << calculateRectanglePerimeter(A, B) << endl;
			break;
		}
	} while (true);


}

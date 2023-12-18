#include <iostream>

using namespace std;
/**
@file main.h
@brief ������� � �������� ��������������
@copyright ����
@author �������� �.�
@date 10.12.2023
@version 1.0.0
*/


 /**
	������ ������� �������� �� ���� �������������� ����� �
	/brief	���� �������������� �����
	/return number ������� �������������� �����
 */
int inputPositiveNumberA() {
	int number;

	do {
		cout << "������� ������������� ����� A: ";
		cin >> number;
	} while (number <= 0);

	return number;
}

/**
������ ������� �������� �� ���� �������������� ����� B
/brief	���� �������������� �����
/return number ������� �������������� �����
*/

int inputPositiveNumberB() {
	int number;

	do {
		cout << "������� ������������� ����� B: ";
		cin >> number;
	} while (number <= 0);

	return number;
}

/**
������ ������� �������� �� ���������� ������� ��������������
/brief	������� ��������������
/param length ����� ��������������
/param width ������ ��������������
/return ������� ��������������
*/


int calculateRectangleArea(int length, int width) {
	return length * width;
}

/**
������ ������� �������� �� ���������� ��������� ��������������
/brief	�������� ��������������
/param length ����� ��������������
/param width ������ ��������������
/return �������� ��������������
*/

int calculateRectanglePerimeter(int length, int width) {
	return 2 * (length + width);
}

int main() {
	int A, B, C;
	/**
	A- ����� ��������������
	B- ������ ��������������
	C- ��� ������ � ����
	*/
	cout << "1. ������ ������������� ����� �" << endl;
	cout << "2. ������ ������������� ����� B" << endl;
	cout << "3. ����� ������� ��������������" << endl;
	cout << "4. ����� �������� ��������������" << endl;

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
			cout << "������� ��������������: " << calculateRectangleArea(A, B) << endl;
			break;
		case 4:
			cout << "�������� ��������������: " << calculateRectanglePerimeter(A, B) << endl;
			break;
		}
	} while (true);


}

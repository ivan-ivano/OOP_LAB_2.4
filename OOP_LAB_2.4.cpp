// OOP_LAB_2.4.cpp
#include <iostream>
#include "Matrix.h"
#include "Windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Matrix a(2);
	Matrix b(2);
	std::cin >> a >> b;
	std::cout << "A - B:" << "\n" << a - b << '\n';
	if (a == b)
		std::cout << "������� ���\n";
	else
		std::cout << "������� �� ���\n";
	std::cout << "����� �������:" << a.norm() << '\n';
	return 0;
}


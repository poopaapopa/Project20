#include <iostream>
#include <conio.h>
#include <iomanip>
#include "Header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������������ ��������: " << "\n" << "\n";
	//Student student("������ �.�", 3, new int[3]{10,10,9});
	//cout << "������� ���� " << student.getName() << " : " << fixed << setprecision(2) << student.getAver() << "\n";
	const int size = 2;
	Student* students = new Student[size]
	{
		{"������� 1 ", 3, new int[3]{10,10,9}},
		{"������� 1 ", 3, new int[3]{8,10,8}}
	};
	double sum = 0;
	for (Student* stud = students; stud < students + size; stud++)
	{
		double aver = stud->getAver();
		cout << "������� ���� " << stud->getName() << " : " << fixed << setprecision(2) << aver << "\n";
		sum += aver;
	}
	cout << "������� ����: " << fixed << setprecision(2) << sum/size << "\n";
	delete[] students;
	_getch();
	return 0;
}
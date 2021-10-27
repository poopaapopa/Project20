#include <iostream>
#include <conio.h>
#include <iomanip>
#include "Header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Успеваемость студента: " << "\n" << "\n";
	//Student student("Петров А.И", 3, new int[3]{10,10,9});
	//cout << "Средний балл " << student.getName() << " : " << fixed << setprecision(2) << student.getAver() << "\n";
	const int size = 2;
	Student* students = new Student[size]
	{
		{"Студент 1 ", 3, new int[3]{10,10,9}},
		{"Студент 1 ", 3, new int[3]{8,10,8}}
	};
	double sum = 0;
	for (Student* stud = students; stud < students + size; stud++)
	{
		double aver = stud->getAver();
		cout << "Средний балл " << stud->getName() << " : " << fixed << setprecision(2) << aver << "\n";
		sum += aver;
	}
	cout << "Средний балл: " << fixed << setprecision(2) << sum/size << "\n";
	delete[] students;
	_getch();
	return 0;
}
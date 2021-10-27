#include <iostream>
#include"Header.h"
using namespace std;

Student::Student()
{
	name = nullptr;
	marks = nullptr;
	markCount = 0;
}

Student::Student(const char* studentName, const int studentMarkCount)
{
	createName(studentName);
	marks = new int[studentMarkCount];
	for (int i = 0; i < studentMarkCount; i++)
		marks[i] = 0;
	markCount = studentMarkCount;
}

Student::Student(const char* studentName, const int studentMarkCount, const int* studentMarks)
{
	createName(studentName);
	marks = new int[studentMarkCount];
	for (int i = 0; i < studentMarkCount; i++)
		marks[i] = studentMarks[i];
	markCount = studentMarkCount;
}

Student::~Student()
{
	if (name != nullptr)
		delete[] name;
	if (marks != nullptr)
		delete[] marks;
	cout << "Отработал деструктор";
	system("pause");
}

void Student::createName(const char* studentName)
{
	int nameLenght = strlen(studentName);
	name = new char[nameLenght + 1];
	for (int i = 0; i <= nameLenght; i++)
		name[i] = studentName[i];
}

void Student::setName(const char* studentName)
{
	delete[] name;
	createName(studentName);
}

void Student::setMark(int mark, int index)
{
	if (index < 0 or index >= markCount)
		return;
	if (mark < 1 or mark>12)
		mark = 0;
	marks[index] = mark;
}

double Student::getAver()
{
	double sum = 0;
	for (int i = 0; i < markCount; i++)
		sum += marks[i];
	return sum / markCount;
}
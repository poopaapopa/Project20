#pragma once
class Student
{
public:
	char* name;
	int markCount;
	int* marks;
	void createName(const char* StudentName);
public:
	Student();

	Student(const char* studentName, const int studentMarkCount);

	Student(const char* studentName, const int studentMarkCount, const int* studenMarks);

	~Student();

	const char* getName()
	{
		return name;
	}
	int getMark(int index)
	{
		return marks[index];
	}
	void setName(const char* studentName);
	void setMark(int mark, int index);
	double getAver();
};
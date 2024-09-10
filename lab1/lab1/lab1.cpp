#include <iostream>
using namespace std;
int main() {
	int rows, cols;
	struct student {
		string surname;
		string name;
		int age;
		string group;
		string faculty;
	};

	student student1;
	student1.surname = "Kuznecov";
	student1.name = "Kirill";
	student1.age = 19;
	student1.group = "23vvv1";
	student1.faculty = "fvt";

	student student2;
	student2.surname = "Balaev";
	student2.name = "Gleb";
	student2.age = 52;
	student2.group = "23vvv2";
	student2.faculty = "fite";

	student student3;
	student3.surname = "Belyakova";
	student3.name = "Dariya";
	student3.age = 16;
	student3.group = "23vvv3";
	student3.faculty = "fvt";

	int search;

	cout << "Select search surname/name [1/2]: ";
	cin >> search;

	string target;

	if (search == 1)
	{
		cout << "Enter surname: ";
		cin >> target;

		if (student1.surname == target)
		{
			cout << "Student:\n" << student1.surname << "\n" << student1.name << "\n" << student1.age << "\n" << student1.group << "\n" << student1.faculty;
		}
		else if (student2.surname == target)
		{
			cout << "Student:\n" << student2.surname << "\n" << student2.name << "\n" << student2.age << "\n" << student2.group << "\n" << student2.faculty;
		}
		else if (student3.surname == target)
		{
			cout << "Student:\n" << student3.surname << "\n" << student3.name << "\n" << student3.age << "\n" << student3.group << "\n" << student3.faculty;
		}
		else if (student1.surname != target || student2.surname != target || student3.surname != target)
		{
			cout << "Student not found";
		}

		return 0;
	}
	else if (search == 2)
	{
		cout << "Enter name: ";
		cin >> target;
		if (student1.name == target)
		{
			cout << "Student:\n" << student1.surname << "\n" << student1.name << "\n" << student1.age << "\n" << student1.group << "\n" << student1.faculty;
		}
		else if (student2.name == target)
		{
			cout << "Student:\n" << student2.surname << "\n" << student2.name << "\n" << student2.age << "\n" << student2.group << "\n" << student2.faculty;
		}
		else if (student3.name == target)
		{
			cout << "Student:\n" << student3.surname << "\n" << student3.name << "\n" << student3.age << "\n" << student3.group << "\n" << student3.faculty;
		}
		else if (student1.name != target || student2.name != target || student3.name != target)
		{
			cout << "Student not found";
		}

		return 0;
	}
	else if (search != 1 || search != 2)
	{
		cout << "Enter 1 or 2, it s sposob search";
	}

	return 0;
}

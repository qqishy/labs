#include <iostream>
using namespace std;

int main() {
	struct student {
		string surname;
		string name;
		int age;
		string group;
		int id;
	};

	student mass[4];
	mass[0].surname = "Kuznetsov";
	mass[0].name = "Kirill";
	mass[0].age = 19;
	mass[0].group = "23vvv1";
	mass[0].id = 489674;

	mass[1].surname = "Mishanina";
	mass[1].name = "Anna";
	mass[1].age = 18;
	mass[1].group = "23vvv2";
	mass[1].id = 497674;

	mass[2].surname = "Balaev";
	mass[2].name = "Bleb";
	mass[2].age = 52;
	mass[2].group = "23vvv3";
	mass[2].id = 409875;

	mass[3].surname = "Belyakova";
	mass[3].name = "Dariya";
	mass[3].age = 16;
	mass[3].group = "23vvv4";
	mass[3].id = 525252;

	int search;

	cout << "select a search option surname/name/age/group/student id [1/2/3/4/5]: ";
	cin >> search;

	string target;
	int targetInt;

	if (search == 1)
	{
		cout << "Enter surname: ";
		cin >> target;

		for (int i = 0; i < 4; i++) {
			if (mass[i].surname == target) {
				cout << "Student info: " << mass[i].surname << " " << mass[i].name << " " << mass[i].age << " " << mass[i].group << " " << mass[i].id;
			}
		}

		return 0;
	}
	else if (search == 2)
	{
		cout << "Enter name: ";
		cin >> target;

		for (int i = 0; i < 4; i++) {
			if (mass[i].name == target) {
				cout << "Student info: " << mass[i].surname << " " << mass[i].name << " " << mass[i].age << " " << mass[i].group << " " << mass[i].id;
			}
		}

		return 0;
	}

	else if (search == 3)
	{
		cout << "Enter age: ";
		cin >> targetInt;

		for (int i = 0; i < 4; i++) {
			if (mass[i].age == targetInt) {
				cout << "Student info: " << mass[i].surname << " " << mass[i].name << " " << mass[i].age << " " << mass[i].group << " " << mass[i].id;
			}
		}

		return 0;
	}

	else if (search == 4)
	{
		cout << "Enter group: ";
		cin >> target;

		for (int i = 0; i < 4; i++) {
			if (mass[i].group == target) {
				cout << "Student info: " << mass[i].surname << " " << mass[i].name << " " << mass[i].age << " " << mass[i].group << " " << mass[i].id;
			}
		}

		return 0;
	}

	else if (search == 5)
	{
		cout << "Enter id: ";
		cin >> targetInt;

		for (int i = 0; i < 4; i++) {
			if (mass[i].id == targetInt) {
				cout << "Student info: " << mass[i].surname << " " << mass[i].name << " " << mass[i].age << " " << mass[i].group << " " << mass[i].id;
			}

		}

		return 0;
	}

	else if (search != 1 || search != 2 || search != 3 || search != 4 || search != 5)
	{
		cout << "Enter 1 - 5";
	}


	return 0;
}
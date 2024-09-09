#include <iostream>
using namespace std;
int main() {
	int size;
	cout << "enter size: ";
	cin >> size;
	int* mass = (int*)malloc(size * sizeof(int));

	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		mass[i] = rand() % 100;
	}
	cout << "mass:" << " ";
	for (int i = 0; i < size; i++) {
		cout << mass[i] << " ";
	}

	free(mass);

	return 0;
}
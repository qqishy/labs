#include <iostream>
using namespace std;

int main() {
	int mass[10] = {0};
	
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		mass[i] = rand() % 100;
	}

	cout << "mass:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << mass[i] << " ";
	}

	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int rows, cols;

	cout << "enter rows: ";
	cin >> rows;
	cout << "enter cols: ";
	cin >> cols;

	int** mass = (int**)malloc(rows * sizeof(int*));
	for (int i = 0; i < rows; i++) {
		mass[i] = (int*)malloc(cols * sizeof(int));
	}

	srand(time(NULL));
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			mass[i][j] = rand() % 5;
		}
	}

	cout << "\nmass:";
	for (int i = 0; i < rows; i++) {
		cout << "\n";
		for (int j = 0; j < cols; j++) {
			cout << mass[i][j] << " ";
		}
	}
	cout << endl;
	int rowSUM;

	/*for (int i = 0; i < rows; i++) {
		rowSUM = 0;
		for (int j = 0; j < cols; j++) {
			rowSUM += mass[i][j];
		}
		cout << "Sum " << i + 1 << " row: " << rowSUM << endl;
	}*/
	int SUM = 0;
	for (int i = 0; i < rows -1; i++) {
		
		for (int j = i + 1; j < cols; j++) {
			SUM += mass[i][j];
		}
		
	}
	
	//rows - строки
	cout << "Sum " << SUM << endl;
	
	cout << endl;
	int colSUM;

	for (int j = 0; j < cols; j++) {
		colSUM = 0;
		for (int i = 0; i < rows; i++) {
			colSUM += mass[i][j];
		}
		cout << "Sum " << j + 1 << "col: " << colSUM << endl;
	}

	for (int i = 0; i < rows; ++i) {
		free(mass[i]);
	}
	free(mass);

	return 0;
	
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

void shell(int* a, int size) {
	int gap, x, j;
	for (int k = 0; k < size; k++) {
		gap = a[k];
		for (int i = gap; i < size; ++i) {
			x = a[i];
			j = i - gap;
			while (j >= 0 && x < a[j]) {
				a[j + gap] = a[j];
				j -= gap;
			}
			a[j + gap] = x;
		}
	}
}

void qs(int* a, int left, int right) {
	int i, j;
	int x, y;

	i = left; j = right;

	x = a[(left + right) / 2];

	do {
		while ((a[i] < x) && (i < right)) i++;
		while ((x < a[j]) && (j > left)) j--;

		if (i <= j) {
			y = a[i];
			a[i] = a[j];
			a[j] = y;
			i++; j--;
		}
	} while (i <= j);

	if (left < j) qs(a, left, j);
	if (i < right) qs(a, i, right);
}

int compare(const void* val1, const void* val2) {
	return (*(int*)val1 - *(int*)val2);
};

int main(void)
{
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);

	clock_t start, end; // объявляем переменные для определения времени выполнения
	

	const int size = 40000;

	int* a = (int*)malloc(size * sizeof(int));

	
		

	/*for (int i = 0; i < size; i++) {
		a[i] = rand() % 100 - 1;
	}*/
	
	/*for (int i = 0; i < size; i++) {
		a[i] = i;
	}*/
	
	
	/*for (int i = 0; i < size; i++) {
		a[i] = size - i;
	}*/
	
	
	for (int i = 0; i < size; i++) {
		if (i < size / 2) {
			a[i] = i; //последовательно
		}
		else {
			a[i] = size - i; //убывающая
		}
	}
	

	start = clock();
	/*shell(a, size);*/
	/*qs(a, 0, size - 1);*/
	qsort(a, size, sizeof(int), compare);
	end = clock();

	std::cout << float(end - start) / CLOCKS_PER_SEC << std::endl;

	free(a);
	return(0);
}

#include <iostream>

using namespace std;

#define size 100


void spiral_matrix(int matrix[size][size], int entered_size) {
	if (entered_size <= 0 || entered_size > size) {
		return;
	}

	int num = 1;
	int horizontal = entered_size;
	int vertical = entered_size;
	
	for (int i = 1; i <= entered_size / 2 + entered_size % 2; i++){
		for (int j = i - 1; j < horizontal; j++) {
			matrix[i - 1][j] = num;
			num++;
		}
		for (int k = i; k < vertical; k++) {
			matrix[k][horizontal - 1] = num;
			num++;
		}
		for (int l = horizontal - 2; l >= i - 1; l--) {
			matrix[vertical - 1][l] = num;
			num++;
		}
		for (int f = vertical - 2; f > i - 1; f--) {
			matrix[f][i - 1] = num;
			num++;
		}
		horizontal--;
		vertical--;
	}
	

	return;
}
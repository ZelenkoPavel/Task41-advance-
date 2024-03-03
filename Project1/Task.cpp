#include <iostream>

using namespace std;

#define size 100

string convert_matrix_to_string(int matrix[size][size], int entered_size);

void spiral_matrix(int matrix[size][size], int entered_size);

int main() {

	int matrix[size][size];
	int entered_size;

	do {
		system("cls");
		cout << "Input size of matrix: ";
		cin >> entered_size;
	} while (size <= 0);

	spiral_matrix(matrix, entered_size);

	cout << convert_matrix_to_string(matrix, entered_size) << endl;

	return 0;
}
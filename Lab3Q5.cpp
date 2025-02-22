#include <iostream>
using namespace std;

const int ROWS = 3;  
const int COLS = 3;  

void transposeMatrix(int matrix[ROWS][COLS], int transposed[COLS][ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int transposed[COLS][ROWS];

    transposeMatrix(matrix, transposed);

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    cout << "\nTransposed Matrix:" << endl;
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
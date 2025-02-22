#include <iostream>

const int X = 2; 
const int Y = 2;
const int Z = 2;

void multiplyArrays(int arr1[X][Y][Z], int arr2[X][Y][Z], int result[X][Y][Z]) {
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                result[i][j][k] = arr1[i][j][k] * arr2[i][j][k];
            }
        }
    }
}

void printArray(int arr[X][Y][Z]) {
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                std::cout << "result[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << std::endl;
            }
        }
    }
}

int main() {
    int arr1[X][Y][Z] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    int arr2[X][Y][Z] = {{{1, 1}, {2, 2}}, {{3, 3}, {4, 4}}};
    int result[X][Y][Z]; 

    multiplyArrays(arr1, arr2, result);

    printArray(result);

    return 0;
}
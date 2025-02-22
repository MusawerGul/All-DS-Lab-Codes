#include <iostream>

using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;

    int array1[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[rows][cols] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int sumArray[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sumArray[i][j] = array1[i][j] + array2[i][j];
        }
    }

    cout << "The sum of the two 2D arrays is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sumArray[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
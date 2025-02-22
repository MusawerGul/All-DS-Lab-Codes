#include <iostream>

using namespace std;

int main() {
    const int size = 3;

    int matrix[size][size] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "The given matrix is:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];  // Main diagonal elements
    }

    cout << "\nThe sum of the diagonal elements is: " << sum << endl;

    return 0;
}
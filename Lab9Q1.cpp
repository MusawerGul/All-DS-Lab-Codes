#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {10, 15, 20, 25, 30, 35, 40, 45, 50};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int target;

    cout << "Enter the number to search: ";
    cin >> target;

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
        cout<<"The Size of this Array is: "<<size;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)  
            return mid;
        else if (arr[mid] < key)  
            low = mid + 1;
        else  
            high = mid - 1;
    }
    return -1; 
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter number to search: ";
    cin >> key;

    int result = binarySearch(arr, size, key);

    if (result != -1)
        cout << "Your entered element: "<<key<<" found at index: " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}

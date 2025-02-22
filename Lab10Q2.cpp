#include <iostream>
#include <algorithm> 
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
    int size;
    
    
    cout << "Enter the size of array: ";
    cin >> size;
    
    int arr[size]; 

    
    cout << "Enter " << size << " elements in sorted order: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + size);

    int key;
    cout << "Enter the number to search: ";
    cin >> key;

    int result = binarySearch(arr, size, key);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}

//This is implementation of Two Pointer Approach using famous Dutch National Flag Algorithm
#include <iostream>
using namespace std;
void swapValue(int *arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void printArray(int *arr,int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sort01() {
//    here 0 - (j-1) contains - 0 and j - (i - 1) contains - 1
    cout << "Sorting 0's 1's" << endl;
    int arr[] = {0,1,0,1,0,1,0,1,0};
    int size = sizeof(arr)/ sizeof(int);
    int i = 0, j = 0;
    printArray(arr, size);
    while(i < size) {
        int currentValue = arr[i];
        if(currentValue == 0) {
            swapValue(arr, i, j);
            i++;
            j++;
        } else {
            i++;
        }
    }
    printArray(arr, size);
}
void sort012() {
//    here less than low contains - 0 and low - (high) contains - 1 and greater than high contains - 2
    cout << "Sorting 0's 1's & 2's" << endl;
    int arr[] = {0,2,1,1,2,2,1,0,0,0};
    int size = sizeof(arr) / sizeof (int);
    int low = 0, mid = 0, high = (size - 1);
    printArray(arr,size);
    while(mid <= high) {
        int currentValue = arr[mid];
        if(currentValue == 0) {
            swapValue(arr, low, mid);
            low++;
            mid++;
        } else if(currentValue == 1) {
            mid++;
        } else {
            swapValue(arr, mid, high);
            high--;
        }
    }
    printArray(arr, size);
}
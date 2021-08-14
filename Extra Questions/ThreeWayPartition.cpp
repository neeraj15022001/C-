// Three way partitioning of an array around a given range

#include <iostream>
using namespace std;

void printArray(int input[], int size) {
    for (int i = 0; i < size; i++) {
        cout << input[i] << '\t';
    }
    cout << endl;
}
void swap(int input[], int index1, int index2 ) {
    int temp = input[index1];
    input[index1] = input[index2];
    input[index2] = temp;
}
void sort01(int input[], int size, int lowVal, int highVal) {
    int low = 0, var = 0, high = size - 1;
    while (var <= high) {
        if(input[var] < lowVal) {
            swap(input, low, var);
            low++;
            var++;
        }
        else if(input[var] >= lowVal && input[var] <= highVal) {
            var++;
        } else {
            swap(input, var, high);
            high--;
        }
    }
}
int main() {
    int size = 0;
    cin >> size;
    int input[size];
    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }
    int lowVal = 0, highVal = 0;
    cin >> lowVal >> highVal;
    sort01(input, size, lowVal, highVal);
    printArray(input, size);
}


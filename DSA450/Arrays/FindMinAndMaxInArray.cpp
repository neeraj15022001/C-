#include <iostream>
#include <climits>
using namespace std;
void brute(int* arr, int arraySize, int min, int max) {
    //    Brute Force - Linear Search
    for (int i = 0; i < arraySize ; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "min: " << min << " max: " << max << endl;
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int arraySize = 10;
    int min = INT_MAX,max = INT_MIN;
    brute(arr, arraySize, min, max);
    tournamentMethod(arr, 0, arraySize-1, min, max);
}

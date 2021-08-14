//Trapping Rain Water
#include <iostream>
using namespace std;

long getTrappedWater(long *arr, int n){
    // Write your code here.
    long left[n], right[n];
    long max = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        left[i] = max;
    }
    max = 0;
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] > max)
            max = arr[i];
           right[i] = max;
    }
    long trappedWater = 0;
    for(int i = 0; i < n; i++) {
        trappedWater += (left[i] < right[i] ? (left[i] - arr[i]) : (right[i] - arr[i]));
    }
    return trappedWater;
}

int main() {
    int size = 0;
    cin >> size;
    long arr[size];
    for(int i = 0; i < size; i++)
        cin >> arr[i];
    long result = getTrappedWater(arr, size);
    cout << result << endl;
}


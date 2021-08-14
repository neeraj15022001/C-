// Find subarray with given sum | Set 1 (Nonnegative Numbers)

#include <iostream>
using namespace std;

void subarrayWithGivenSum(int * input, int * output, int givenSum) {
    int end = 0, sum = 0, start = 0;
    while(sum < givenSum ) {
        sum += input[end++];
    }
    if(start == end)
        cout << "There is no subarray present" << endl;
    else if(sum == givenSum)
        cout << "Sum is matching from " << start << " to " << (end - 1) << endl;
    else if(sum > givenSum) {
        while(sum != givenSum)
            sum -= input[start++];
        cout << "Sum is matching from " << start << " to " << (end - 1) << endl;
    }
}

int main() {
    int testCases = 0;
    cin >> testCases;
    while (testCases--) {
        int givenSum = 0;
        cin >> givenSum;
        int size = 0;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        int output[size];
        subarrayWithGivenSum(arr, output, givenSum);
    }
}


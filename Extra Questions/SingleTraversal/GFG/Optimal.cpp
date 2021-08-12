#include <iostream>
using namespace std;

int main() {
    int sizeOfArray;
    cin >> sizeOfArray;
    int arr[sizeOfArray];
    for(int i = 0; i < sizeOfArray; i++)
        cin >> arr[i];
    int currentSum = 0, prevSum = 0, maxSum = 0, sumOfElements = 0;

//    Calculate Sum for first Iteration
    int multiplier = 0;
    for(int i = 0; i < sizeOfArray; i++) {
        sumOfElements += arr[i];
        prevSum += arr[i] * multiplier;
        multiplier++;
    }
    if(maxSum < prevSum)
        maxSum = prevSum;
    for(int i = 0; i < (sizeOfArray - 1); i++) {
        currentSum = 0;
        currentSum = prevSum + sumOfElements - (sizeOfArray) * (arr[sizeOfArray - 1 - i]);
        if(currentSum > maxSum)
            maxSum = currentSum;
//        cout << "Current Sum: " << currentSum << "\tprevSum: " << prevSum << "\tmaxSum: " << maxSum << endl;
        prevSum = currentSum;
    }
    cout << maxSum;
    return 0;
}

#include <iostream>
using namespace std;

void minimumFromSubArrays() {
//    Sliding Window Technique - O(n)

    int arr[] = {1, 13, 2, 16, -10, 4, 11, 18, 2};
    int sizeOfArray = sizeof(arr) / sizeof (int);
    cout << sizeOfArray << endl;
    int k = 5;
    int windowSum  = 0;
    int minimumSum = 0;
    int minumumSumLastIndex = k - 1;
    int minumumSumStartIndex = 0;
    int startIndex = 0;
    int endIndex = k - 1;
    for (int i = startIndex; i <= endIndex; ++i) {
        windowSum += arr[i];
    }
    cout << "First Window Sum is : " << windowSum << endl;
    minimumSum = windowSum;
    while(endIndex < sizeOfArray - 1) {
        int outgoingElement  = arr[startIndex];
        startIndex++;
        endIndex++;
        int incomingElement = arr[endIndex];
        windowSum += incomingElement;
        windowSum -= outgoingElement;
        cout << "Current Window Frame: " << startIndex << " " << endIndex << " " << windowSum << endl;
        if(minimumSum > windowSum) {
            minimumSum = windowSum;
            minumumSumLastIndex = endIndex;
            minumumSumStartIndex = startIndex;
        }
    }
    cout << "Minimum Sum :" << minimumSum << " Start Index: " << minumumSumStartIndex << " Ending Index : " << minumumSumLastIndex << endl;
}

void maximumFromSubArrays() {
//    Sliding Window Technique - O(n)

    int arr[] = {1, 13, 2, 16, -10, 4, 11, 18, 2};
    int sizeOfArray = sizeof(arr) / sizeof (int);
    cout << sizeOfArray << endl;
    int k = 5;
    int windowSum  = 0;
    int maximumSum = 0;
    int maximumSumStartIndex = 0;
    int maximumSumLastIndex = k - 1;
    int startIndex = 0;
    int endIndex = k - 1;
    for (int i = startIndex; i <= endIndex; ++i) {
        windowSum += arr[i];
    }
    cout << "First Window Sum is : " << windowSum << endl;
    maximumSum = windowSum;
    while(endIndex < sizeOfArray - 1) {
        int outgoingElement  = arr[startIndex];
        startIndex++;
        endIndex++;
        int incomingElement = arr[endIndex];
        windowSum += incomingElement;
        windowSum -= outgoingElement;
        cout << "Current Window Frame: " << startIndex << " " << endIndex << " " << windowSum << endl;
        if(maximumSum < windowSum) {
            maximumSum = windowSum;
            maximumSumLastIndex = endIndex;
            maximumSumStartIndex = startIndex;
        }
    }
    cout << "Maximum Sum :" << maximumSum << " Start Index: " << maximumSumStartIndex << " Ending Index : " << maximumSumLastIndex << endl;
}
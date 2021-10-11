#include <iostream>
#include <climits>
using namespace std;

void minimumFromSubArrays() {
//    Sliding Window Technique - O(n)

    int arr[] = {1, 13, 2, 16, -10, 4, 11, 18, 2};
    int sizeOfArray = sizeof(arr) / sizeof(int);
    cout << sizeOfArray << endl;
    int k = 5;
    int windowSum = 0;
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
    while (endIndex < sizeOfArray - 1) {
        int outgoingElement = arr[startIndex];
        startIndex++;
        endIndex++;
        int incomingElement = arr[endIndex];
        windowSum += incomingElement;
        windowSum -= outgoingElement;
        cout << "Current Window Frame: " << startIndex << " " << endIndex << " " << windowSum << endl;
        if (minimumSum > windowSum) {
            minimumSum = windowSum;
            minumumSumLastIndex = endIndex;
            minumumSumStartIndex = startIndex;
        }
    }
    cout << "Minimum Sum :" << minimumSum << " Start Index: " << minumumSumStartIndex << " Ending Index : "
         << minumumSumLastIndex << endl;
}

void maximumFromSubArrays() {

//    Sliding Window Technique - O(n)

    int arr[] = {1, 13, 2, 16, -10, 4, 11, 18, 2};
    int sizeOfArray = sizeof(arr) / sizeof(int);
    cout << sizeOfArray << endl;
    int k = 5;
    int windowSum = 0;
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
    while (endIndex < sizeOfArray - 1) {
        int outgoingElement = arr[startIndex];
        startIndex++;
        endIndex++;
        int incomingElement = arr[endIndex];
        windowSum += incomingElement;
        windowSum -= outgoingElement;
        cout << "Current Window Frame: " << startIndex << " " << endIndex << " " << windowSum << endl;
        if (maximumSum < windowSum) {
            maximumSum = windowSum;
            maximumSumLastIndex = endIndex;
            maximumSumStartIndex = startIndex;
        }
    }
    cout << "Maximum Sum :" << maximumSum << " Start Index: " << maximumSumStartIndex << " Ending Index : "
         << maximumSumLastIndex << endl;
}

void housingProblem() {
    int arr[] = {1, 3, 2, 1, 4, 1, 3, 2, 1, 1, 2};
    int arrSize = sizeof(arr) / sizeof(int);
    int cs = 0;
    int i = 0;
    int j = 0;
    int k = 8;
    while (i < arrSize - 1) {
        cs += arr[j];
        j++;

        // removing the element from the array if cs > k
        while (/* condition */ cs > k && i < j) {
            cs -= arr[i];
            i++;
        }

        if (cs == k) {
            cout << "Index of i is : " << i << " And Index of j is: " << j - 1 << endl;
        }

    }

}

void housingProblemMinimumSize() {
//    Find subarray with minimum sum
//    handle negative cases
    int arr[] = {-1, 3, 2, 1, 2, 3, 1, -1};
    int arrSize = sizeof(arr) / sizeof(int);
    int i = 0;
    int j = 0;
    int cs = 0;
    int k = 5;
    int minimumSubArrayStart = 0;
    int minimumSubArrayEnd = 0;
    int minimumSubArraySize = INT_MAX;
    while (i < arrSize - 1) {
        if(arr[j] < 0) {
            j++;
            i = j;
            cs = 0;
        } else {
            cs += arr[j];
            j++;
        }

//        removing elements from array once size exceeds k
        while (cs > k && i < j) {
            if (arr[i] < 0) {
                j++;
                i = j;
            } else {
                cs = (cs - arr[i] < cs ? cs - arr[i] : cs);
                i++;
            }
        }

        if(cs == k) {
            if((j - i) < minimumSubArraySize ) {
                minimumSubArrayStart = i;
                minimumSubArrayEnd = j - 1;
                minimumSubArraySize = j - i;
            }
        }
    }
    cout << minimumSubArrayStart << " - " << minimumSubArrayEnd << endl;
}
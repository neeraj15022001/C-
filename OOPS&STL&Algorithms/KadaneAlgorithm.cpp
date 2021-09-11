// Maximum Sub Array Sum Using Kadane Algorithm - O(n) - AuxillarySpace - O(1)
#include <iostream>
#include <algorithm>

using namespace std;

void findMaximumSumSubArray() {
    int arr[] = {-19, 1, 2, 3, -4, 10};
    int size = sizeof(arr)/ sizeof(int);
    int prevSubArraySum = arr[size - 1];
    int max = prevSubArraySum;
    int maximumSubArrayStartIndex = size - 1;
    int maximumSubArrayLastIndex = size - 1;
    for (int i = size - 2; i >= 0; i--) {
        int currentIndex = i;
        int currentSubArraySum =
                arr[currentIndex] > (arr[currentIndex] + prevSubArraySum) ? arr[currentIndex] : (arr[currentIndex] +
                                                                                                 prevSubArraySum);
        prevSubArraySum = currentSubArraySum;
        if (max < prevSubArraySum) {
            max = prevSubArraySum;
            maximumSubArrayStartIndex = i;
        }
    }
    cout << "Maximum Sub Array Value: " << max << " Starting Index: " << maximumSubArrayStartIndex << " Ending Index: "
         << maximumSubArrayLastIndex << endl;
}
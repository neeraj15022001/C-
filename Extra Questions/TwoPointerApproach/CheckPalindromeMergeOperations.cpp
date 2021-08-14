//Find the minimum number of merge operations to make an array palindrome

#include <iostream>
using namespace std;

int findCount(int input[], int size) {
    int count = 0;
    int i = 0, j = size - 1;
    while (i < j) {
        if(input[i] < input[j]) {
            input[i+1] += input[i];
            i++;
            count++;
        }
        if(input[i] > input[j]) {
            input[j - 1] += input[j];
            j--;
            count++;
        }
        if(input[i] == input[j]) {
            i++;
            j--;
        }
    }
    return count;
}

int main() {
    int testCases = 0;
    cin >> testCases;
    while (testCases--) {
        int size = 0;
        cin >> size;
        int input[size];
        for (int i = 0; i < size; i++) {
            cin >> input[i];
        }
        int result = findCount(input, size);
        cout << result << endl;
    }
}


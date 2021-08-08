#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
	int temp = n, count = 0;
    while(temp != 0) {
        temp/=10;
        count++;
    }
    int arr[count];
    temp = n;
    int i = count - 1;
    while(temp != 0) {
        arr[i--] = temp%10;
        temp/=10;
    }
    int max = INT_MIN;
    for(int i = 0; i < count; i++) {
        int k = 100, number = 0;
        for(int j = 0; j < count; j++) {
            if(j == i) {
                continue;
            }
            else {
            	number += arr[j] * k;
                // cout << number << endl;
                k/=10;
            }
        }
        // cout << number << endl;
        if(number > max)
            max = number;
    }
    cout << max;
}


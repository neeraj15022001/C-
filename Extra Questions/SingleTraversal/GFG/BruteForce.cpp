#include<iostream>
#include<climits>
using namespace std;

int main() {
        int multiplier = 0, count = 0, sum = 0, maxSum = INT_MIN;
        int sizeOfArray = 0;
        cin >> sizeOfArray;
        int arr[sizeOfArray];
        for(int k = 0; k < sizeOfArray; k++)
            cin >> arr[k];
        for(int i = 0; i < sizeOfArray; i++) {
            int j = i;
            sum = 0;
            multiplier = 0;
            count = 0;
            while(count != sizeOfArray) {
                if(j == (sizeOfArray))
                    j = 0;
//                cout << "i :" << i << " j: " << j << endl;
                sum += arr[j++] * multiplier;
                multiplier++;
                count++;
            }
            if(sum > maxSum)
                maxSum = sum;
//            cout << "sum: " << sum << " count: " << count << " multitplier: " << multiplier << endl;
        }
        cout << maxSum << endl;
        return 0;
}

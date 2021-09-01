#include <iostream>
#include <algorithm>
using namespace std;



int pairSum(int *arr, int n, int num)
{
	sort(arr, arr + n);
	int i = 0, j = n - 1, count = 0;
    while(i < j) {
        int sum = arr[i] + arr[j];
        if(arr[i] == arr[j] && sum == num && i != j-1) {
            return n*2;
        }
        if((arr[i] == arr[i+1] || arr[j] == arr[j-1]) && (sum == num)) {
            int k = i, l = j;
            int count1 = 1, count2 = 1;
            while(arr[k] == arr[k+1] && k < j - 1) {
                count1++;
                k++;
            }
            while(arr[l] == arr[l-1] && l > i + 1) {
                count2++;
                l--;
            }
			count += count1*count2;
            i = k+1;
            j = l-1;
        }
    	else {
            if(sum == num) {
                count++;
                i++;
                j--;
            }
            else if(sum > num) {
                j--;
            }
            else if(sum < num) {
                i++;
            }
        }
    }
    return count;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}
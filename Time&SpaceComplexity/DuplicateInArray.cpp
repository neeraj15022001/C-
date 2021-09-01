#include <iostream>
using namespace std;

int findDuplicate(int *arr, int n)
{
    if(arr[0] == arr[1])
        return arr[0];
	int sum = 0;
    for(int i = 0; i < (n); i++) {
        sum += arr[i];
    }
    int newSum = 0;
    for(int i = 0; i < (n-1); i++) {
        newSum += arr[i];
    }
	return (sum - newSum);
}
int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}
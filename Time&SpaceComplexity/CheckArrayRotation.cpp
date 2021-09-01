#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int size)
{
    int left = 0;
    int right = size - 1;
    while (left < right) { 
        int mid = left + (right - left) / 2;
        if (input[mid] > input[right]) {
            left = mid + 1; 
        }
        else {
            right = mid;
        }
    }
    return left;
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

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}
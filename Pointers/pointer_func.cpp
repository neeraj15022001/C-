#include<iostream>
using namespace std;

int sum(int * a, int size) {
	int sum =  0;
	for(int i = 0; i < size; i++){
		sum += a[i];
	}
	return sum;
}

int main() {
	int arr[5] = {1,2,3,4,5};
	int ans = sum(arr+1,3);
	cout << ans << endl;
	return 0;
}

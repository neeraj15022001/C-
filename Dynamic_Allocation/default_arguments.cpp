#include<iostream>
using namespace std;

// here b's default value is 0.
int sum(int a, int b = 0) {
	return a+b;
}
int main() {
	cout << sum(2) << endl;
	cout << sum(2,3) << endl;
	return 0;
}

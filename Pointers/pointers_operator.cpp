#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int * p = &a;
	cout << a << '\t' << *p << '\t' << &a << '\t' << p << endl;
	p = p + 1;
	cout << a << '\t' << *p << '\t' << &a << '\t' << p << endl;
	return 0;
}

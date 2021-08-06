#include<iostream>
using namespace std;

int main() {
	int i = 10;
	cout << i << endl;
	int * p = &i;
	cout << *p << endl;
	int * q = p;
	cout << q << '\t' << p << '\t' << &i << endl;
	cout << *q << endl;
	(*q)++;
	cout << i << '\t' << *p << '\t' << *q << endl;	
	cout << q << '\t' << p << '\t' << &i << endl;
	*(q++);
	cout << q << '\t' << p << '\t' << &i << endl;
	return 0;
}

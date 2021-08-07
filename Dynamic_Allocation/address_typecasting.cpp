#include<iostream>
using namespace std;

int main() {
	int a = 65;
	char ch = a;
	cout << a << '\t' << ch << endl;
	int * p = &a;
	char *q =(char*) p;
	cout << *p << '\t' << *q << endl;
	return 0;
}

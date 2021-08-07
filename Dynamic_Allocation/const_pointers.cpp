#include<iostream>
using namespace std;

void g(const int & j) {
	j++;
}

void f(const int * p) {
	(*p)++;
}

int main() {
	//const pointer to const variable
	int const i = 10;
	int const * p = &i;
	cout << i << '\t' << *p << endl;

	//const pointer to variable
	int k = 20;
	int const * q = &k;
	cout << k << '\t' << *q << endl;

	//pointer to a const variable is not possible
	//int const j = 30;
	//int * r = &j;
	
	int j = 30;
	int * p1 = &j;
	f(p1);
	return 0;
}

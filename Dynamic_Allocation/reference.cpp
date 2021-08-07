#include<iostream>
using namespace std;

int main() {
	int i = 10;
	int &j = i;
	i++;
	cout << j << endl;
	j++;
	cout << j << endl;
	cout << sizeof(i) << '\t' << sizeof(j) << endl;
	cout << &i << '\t' << &j << endl;
	return 0;
}

#include<iostream>
using namespace std;

int main() {
	const int i = 10;
	int j = 20;
	int const j2 = 40;
	cout << j << endl;
	// here we created reference variable constant that means when we will try to modify variable through 		this reference variable then it will error out as it is constant, whereas it can be modified through 		original variable as it is not constant.
	//constant reference from a non constant integer
	const int & k = j;
	j++;
	cout << j << endl;

	// constant reference from a const integer
	int const j3 = 50;
	int const & j4 = j3;
	cout << j3 << '\t' << j4 << endl;

	// reference from a const integer
	int const j6 = 123;
	// not allowed
	//int & k3 = j6;
	return 0;
}

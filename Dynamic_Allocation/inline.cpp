#include<iostream>
using namespace std;

// we use inline function when code is of 1 line. If 2/3 lines then compiler decide either to compiler or not and for lines greater than 3 compiler does not allow compiling as executable file will become bulky if compiled with inline functions with huge number of lines.
inline int max(int a, int b) {
	return a>b?a:b;
}
int main() {
	int c = max(5,4);
	int d = max(8,9);
	cout << c << '\t' << d << endl;	
	return 0;
}

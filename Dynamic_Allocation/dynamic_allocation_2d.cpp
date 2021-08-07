#include<iostream>
using namespace std;


int main() {
	int ** p = new int*[10];
	for(int i = 0;i < 10; i++) {
		p[i] = new int[20];
		for(int j = 0; j < 20; j++) {
			p[i][j] = i+j;
		}
	}
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 20; j++) {
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
	
	//delete heap memory
	
	for(int i = 0; i < 10; i++) {
		delete [] p[i];
	}
	delete [] p;

	return 0;
}

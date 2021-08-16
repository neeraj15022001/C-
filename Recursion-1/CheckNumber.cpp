#include<iostream>
using namespace std;

bool checkNumber(int input[], int size, int x) {
    if(size == 0)
        return false;
	if(size == 1) {
        return x==input[0];
    }
    bool smallOutput = checkNumber(input + 1, size - 1, x);
    if(smallOutput)
        return true;
    else
    	return x == input[0];
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    if(checkNumber(input, n, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}



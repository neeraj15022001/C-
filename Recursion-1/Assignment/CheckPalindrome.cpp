#include <iostream>
#include<array>
using namespace std;
bool helper(char input[], int sI, int eI) {
    if(sI >= eI)
        return true;
    bool smallOutput = helper(input, sI+1, eI-1);
    // cout << "smallOutput: " << smallOutput << endl;
	if(smallOutput) {
        // cout << "input[sI]: " << input[sI] << " input[eI]: " << input[eI] << endl;
        return input[sI] == input[eI] ? true : false;
    }
    else
        return false;
}
int getArraySize(char input[]) {
    int i = 0, count = 0;
    while(input[i] != '\0') {
        count++;
        i++;
    }
    return count;
}
bool checkPalindrome(char input[]) {
    // Write your code here
    int arraySize = getArraySize(input);
    // cout << "arraySize: " << arraySize <<endl;
    return helper(input, 0, arraySize - 1);
}

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

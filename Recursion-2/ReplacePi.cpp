#include <iostream>
using namespace std;
#include<bits/stdc++.h>


int getArraySize(char input[]) {
    int i = 0, count = 0;
    while(input[i++] != '\0')
        count++;
    return count;
        
}
void helper(char input[], int length) {
	if(length == 0 || length == 1)
        return;
    helper(input+1, length - 1);
    if(input[0] == 'p' && input[1] == 'i') {
        // cout << length << endl;
        length = strlen(input);
        for(int i = length; i >= 1; i--) {
            // cout << length << endl;
            input[i+2] = input[i];
        }
        // cout << input << endl;
//         shifting
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
        // cout << input[length + 2] << '\t' << input[length + 3] << endl;
        // cout << input << endl;
    }
    // cout << "after: " << input << endl;
    // cout << "input[0]: " << input[0] << " input[1]: " << input[1] << endl;
}
void replacePi(char input[]) {
	// Write your code here
    int length = getArraySize(input);
    helper(input, length);
    
    // cout << input << endl;
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}

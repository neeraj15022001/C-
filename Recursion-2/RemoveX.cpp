#include <iostream>
using namespace std;
#include<bits/stdc++.h>

void helper(char input[], int startIndex) {
    if(input[startIndex] == '\0')
        return;
    helper(input, startIndex + 1);
    if(input[startIndex] == 'x') {
        for(int i = startIndex + 1; i < strlen(input) + 1; i++) {
            input[i-1] = input[i];
        }
    }
}
void removeX(char input[]) {
	helper(input, 0);
}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}

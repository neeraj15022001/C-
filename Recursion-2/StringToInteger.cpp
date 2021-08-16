#include <iostream>
using namespace std;
#include<cmath>
#include<bits/stdc++.h>


int helper(char input[], int sI, int length) {
    if(input[sI] == '\0' || input[sI + 1] == '\0') {
        int b = input[sI];
        int a = b - 48;
        return a * (int)pow(10, length);
    }
    int smallOutput = helper(input, sI + 1, length - 1);
    int b = input[sI];
    int a = b - 48;
    return smallOutput + a * (int)pow(10, length);
}
int stringToNumber(char input[]) {
	return helper(input, 0, strlen(input) - 1);

}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}

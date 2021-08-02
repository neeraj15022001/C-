#include <iostream>
#include <cstring>
using namespace std;

int length(char str[]) {
    int i = 0,count = 0;
    while(str[i] != '\0') {
        count++;
        i++;
    }
    return count;
}
bool checkPalindrome(char str[]) {
    // Write your code here
    int strlength = length(str);
    char reverseString[strlength + 1];
    int i = strlength - 1, k = 0;
    while(i >= 0) {
        reverseString[k] = str[i];
        i--;
        k++;
    }
    reverseString[strlength] = '\0';
    // cout << str << endl << reverseString << endl;
    // cout << length(str) << endl << length(reverseString) << endl;
    // cout << (str == reverseString) << endl;
    int flag = 0;
    for(int i = 0; i < strlength; i++) {
        // cout << str[i] << endl << reverseString[i] << endl;
        if(str[i] != reverseString[i]) {
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        return true;
    } else {
        return false;
    }
}



int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
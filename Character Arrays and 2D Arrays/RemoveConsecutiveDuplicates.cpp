#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
	int length = strlen(input);
    if(length > 1) {
        int i = 0, index = 0;
        char firstChar = input[i];
        input[index++] = firstChar;
        while(input[i] != '\0') {
          if(input[i] != firstChar) {
            firstChar = input[i];
            input[index++] = firstChar;
          }
          i++;
        }
        input[index] = '\0';
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}
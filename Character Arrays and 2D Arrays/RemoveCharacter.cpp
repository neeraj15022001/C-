#include <iostream>
#include <cstring>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c) {
  int i = 0, index = 0;
	while(input[i] != '\0') {
    if(input[i] != c) {
      input[index++] = input[i];
    }
    i++;
  }
  input[index] = '\0';
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}
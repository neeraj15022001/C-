#include <iostream>
#include <cstring>
using namespace std;

void reverse(char input[], int start, int end) {
  while(start <= end) {
    int temp = input[start];
    input[start++] = input[end];
    input[end--] = temp;
  }
}
void reverseEachWord(char input[]) {
  int length = strlen(input);
  int start = 0, end = 0;
  while(input[end] != '\0') {
    if(input[end] == ' ') {
      reverse(input, start, end - 1);
      start = end + 1;
    }
    end++;
  }
  reverse(input, start, length - 1);
}
int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}
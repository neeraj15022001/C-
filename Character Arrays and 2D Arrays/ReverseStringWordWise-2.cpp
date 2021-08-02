// Optimized Approach by Parth Sethi(https://github.com/victorakaps)
#include <iostream>
using namespace std;

void reverse(char input[], int start, int end) {
  // cout << "start:" << start << endl << "end:" << end << endl;
  while(start <= end) {
    char temp = input[start];
    input[start++] = input[end];
    input[end] = temp;
    end--;
  }
}
int getStringLength(char string[]) {
    int count = 0, i = 0;
    while(string[i] != '\0') {
        count++;
        i++;
    }
    return count;
}
void reverseStringWordWise(char input[]) {
  int length = getStringLength(input);
  int start = 0, end = 0;
  while(input[end] != '\0') {
    // cout << input[end] << endl;
    if(input[end] == ' ') {
      // cout << "end:" << end << endl;
      reverse(input, start, end - 1);
      start = end + 1;
    }
    end++;
  }
  // cout << "start:" << start << endl << "length:" << length << endl;
  reverse(input, start, length - 1);
  reverse(input, 0 , length - 1);
}
int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}

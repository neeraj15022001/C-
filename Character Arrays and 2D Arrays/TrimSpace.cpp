#include <iostream>
#include <cstring>
using namespace std;

int getLength(char string[]) {
  int i = 0,count = 0;
  // cout << "in function getLength" << endl << string << endl;
  while(string[i] != '\0') {
    // cout << "in while loop" << endl;
    count++;
    i++;
  }
  return count;
}
void trimSpaces(char input[]) {
  // cout << "in function trimSpaces" << endl;
  int length = getLength(input);
  // cout << "length of string: " << length << endl;
  char trimmedString[length];
  int k = 0;
  for(int i = 0; i < length; i++) {
    if(input[i] != ' ') {
      trimmedString[k] = input[i];
      k++;
    }
  }
  trimmedString[k] = '\0';
  // cout << trimmedString << endl;
  int i = 0;
  while(trimmedString[i] != '\0') {
    input[i] = trimmedString[i];
    i++;
  }
  input[i] =  '\0';
  // cout << input << endl;
}
int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    cout << "Input taken" << endl;
    trimSpaces(input);
    cout << input << endl;
}


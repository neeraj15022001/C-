// Brute Force Approach. Here we are taking extra space
#include <iostream>
using namespace std;

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
  char reversedString[length+1];
  //cout << length + 1 << endl;
  int j = 0, end = length;
  for(int i = length - 2; i >= 0; i--) {
    if(input[i] == ' ') {
      //cout << "j:" << j << endl;
      //cout << "i:" << i << endl;
      int k = i + 1;
      while(k != end) {
        reversedString[j] = input[k];
        k++;
        j++;
        //cout << input[k] << endl;
      }
      end = i;
      reversedString[j++] = ' '; 
    }
  }
  //cout << "j:" << j << endl;
  for(int i = 0; i < end; i++) {
    reversedString[j] = input[i];
    //cout << "input[i]:" << input[i] << endl << "j:" << j << endl << "i:" << i << endl << "reversedString[j]:" << reversedString[j] << endl;
    j++;
  }
  //cout << "end:" << end << endl << "j:" << j << endl;
  //cout << "length:" << length << endl;
  reversedString[length] = '\0';
  //cout << "printing reversed string" << endl;
  int i = 0;
  while(reversedString[i] != '\0') {
    //cout << reversedString[i] << '\t' << "i:" << i << endl;
    input[i] = reversedString[i];
    i++;
  }
  //cout << reversedString << endl;
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
    return 0;
}

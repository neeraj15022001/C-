// In this approach we will do same work as PushZerosToEnd-1 but without temporary array
#include<iostream>
using namespace std;

void pushZeroesEnd(int *input, int size) {
  int k = 0;
  for(int i = 0; i < size; i++) {
    if(input[i] != 0) {
      int temp = input[k];
      input[k] = input[i];
      input[i] = temp;
      k++;
    }
  }
}

int main() {
  int testCases;
  cin >> testCases;
  while(testCases != 0) {
    int size;
    cin >> size;
    int input[size];
    for(int i = 0; i < size; i++)
      cin >> input[i];
    pushZeroesEnd(input, size);
    for(int i = 0; i < size; i++)
      cout << input[i];
    cout << endl;
    testCases--;
  }
  return 0;
}
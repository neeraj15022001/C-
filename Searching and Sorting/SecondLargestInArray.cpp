#include<iostream>
using namespace std;
int findSecondLargest(int *input, int n)
{
  int largest = -2147483648;
  int secondLargest = -2147483648;
  for(int i = 0; i < n; i++) {
    if(input[i] > largest) {
      secondLargest = largest;
      largest = input[i];
    } else if(input[i] > secondLargest && input[i] != largest) {
      secondLargest = input[i];
    }
  }
  return secondLargest;
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
    int secondLargest = findSecondLargest(input,size);
    cout << secondLargest << endl;
    testCases--;
  }
  return 0;
}
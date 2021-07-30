#include<iostream>
using namespace std;
void printArray(int *arr, int size) {
  for(int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}
void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
  int size3 = size1 > size2 ? size1 + 1: size2 + 1;
  int i = size1 - 1, j = size2 - 1, k = size3 - 1;
  int carry = 0;
  while(i >= 0 && j >= 0) {
    int number = input1[i] + input2[j] + carry;
    carry = number%10;
    output[k] = carry;
    carry = number/10;
    i--;
    j--;
    k--;
  }
  while(i >= 0) {
    int number = input1[i] + carry;
    carry = number%10;
    output[k] = carry;
    carry = number/10;
    i--;
    k--;
  }
  while(j >= 0) {
    int number = input2[j] + carry;
    carry = number%10;
    output[k] = carry;
    carry = number/10;
    j--;
    k--;
  }
  while(k >= 0) {
    output[k] = carry;
    k--;
  }

}
int main() {
  int testCases;
  cin >> testCases;
  while(testCases != 0) {
    int size1;
    cin >> size1;
    int arr1[size1];
    for(int i = 0; i < size1; i++)
      cin >> arr1[i];
    int size2;
    cin >> size2;
    int arr2[size2];
    for(int i = 0; i < size2; i++)
      cin >> arr2[i];
    int size3 = size1 > size2 ? size1 + 1 : size2 + 1;
    int output[size3];
    sumOfTwoArrays(arr1, size1, arr2, size2, output);
    printArray(output, size3);
    testCases--;
  }
}
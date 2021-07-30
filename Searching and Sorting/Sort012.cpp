#include<iostream>
using namespace std;
void swap(int *arr, int index1, int index2) {
  int temp = arr[index1];
  arr[index1] = arr[index2];
  arr[index2] = temp;
}
void printArray(int *arr, int size) {
  for(int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}
void sort012(int *arr, int n)
{
  int i = 0, nZ = 0, nT = n-1;
    
    while(i <= nT) {
      // printArray(arr, n);
      // cout << i << "," << nZ << "," << nT << endl;
      if(arr[i] == 0) {
        swap(arr,i,nZ);
        nZ++;
        i++;
      } else if(arr[i] == 1) {
        i++;
      } else {
        swap(arr, i , nT);
        nT--;
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
    sort012(input,size);
    printArray(input, size);
    testCases--;
  }
  return 0;
}
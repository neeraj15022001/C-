#include<iostream>
using namespace std;
int findRotationIndex(int *input, int low, int high) {
  if(high < low)
  return 0;

  if(high == low)
  return low;

  int mid = (high+low)/2;

  if(mid < high &&  input[mid + 1] < input[mid])
    return mid+1;

  if(low < mid && input[mid] < input[mid - 1])
    return mid;

  if(input[mid] < input[high])
    return findRotationIndex(input, low, mid - 1);
  return findRotationIndex(input, mid + 1, high);
}
int arrayRotateCheck(int *input, int size)
{
  int result = findRotationIndex(input, 0 , size - 1);
  return result;
}
int main(){
  int testCases;
  cin >> testCases;
  while(testCases != 0) {
    int size;
    cin >> size;
    int input[size];
    for(int i = 0; i < size; i++)
      cin >> input[i];
    int result = arrayRotateCheck(input, size);
    cout << result << endl;
  }
  return 0;
}
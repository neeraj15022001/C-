// Approach in which we will store first d elements in different array
#include<iostream>
using namespace std;
void rotate(int *input, int d, int n)
{
  int temp[d];
  for(int i = 0; i < d; i++) {
    temp[i] = input[i];
  }
  for(int i = d; i < n; i++) {
    input[i - d] = input[i];
  }
  int k = 0;
  for(int i = (n - d); i < n; i++) {
    input[i] = temp[k];
    k++;
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
    int d;
    cin >> d;
    rotate(input, d, size);
    for(int i = 0; i < size; i++)
      cout << input[i];
    cout << endl;
    testCases--;
  }
  return 0;
}
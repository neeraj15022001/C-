// Drawback for n > 1000 time limit will exceed 1s limit
#include<iostream>
using namespace std;
void rotate(int *input, int d, int n)
{
  while(d != 0) {
    int firstElement = input[0];
    for(int i = 1; i < n; i++) {
      input[i - 1] = input[i];
    }
    input[n-1] = firstElement;
    d--;
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
// In this approach reverse arrray and then divide array at n-d and reverse left and right parts
#include<iostream>
using namespace std;
void reverseArray(int *input, int startingIndex, int endingIndex) {
  int i = startingIndex, j = endingIndex;
  while(i <= j) {
    int temp = input[i];
    input[i] = input[j];
    input[j] = temp;
    i++;
    j--;
  }
}
void rotate(int *input, int d, int n)
{
  reverseArray(input, 0 , n - 1);
  reverseArray(input, n - d, n - 1);
  reverseArray(input, 0 , n - d - 1);

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
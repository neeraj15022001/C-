#include<iostream>
using namespace std;
void pushZeroesEnd(int *input, int size)
{
    int tempArray[size];
    int k = 0;
    for(int i = 0; i < size; i++) {
        if(input[i] != 0) {
            tempArray[k] = input[i];
            k++;
        }
    }
    for(int j = k; j < size; j++) {
        tempArray[k] = 0;
        k++;
    }
    for(int i = 0; i < size; i++)
        input[i] = tempArray[i];
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
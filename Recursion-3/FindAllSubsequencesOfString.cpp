#include<iostream>
#include<cmath>
using namespace std;

int findSubsequence(string input, string* output) {
  if(input.empty()) {
    output[0] = "";
    return 1;
  }
  int smallOutput = findSubsequence(input.substr(1), output);
  for(int i = 0; i < smallOutput; i++) {
    output[i+smallOutput] = input[0] + output[i];
  }
  return 2 * smallOutput;
}
int main() {
  string input = "";
  cin >> input;
  int length = input.size();
  int size = pow(2, length);
  string* output = new string[size];
  int subsequences = findSubsequence(input, output);
  for(int i = 0; i < subsequences; i++)
    cout << output[i] << " ";
  cout << endl;
  cout << "No Of Subsequences are: " << subsequences << endl;
  return 0;
}
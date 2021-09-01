#include<iostream>
using namespace std;

void printSubsequence(string str, string output) {
  if(str.empty()) {
    cout << output << endl;
    return;
  }
  printSubsequence(str.substr(1), output);
  printSubsequence(str.substr(1), output + str[0]);
}
int main() { 
  string str = "abc";
  printSubsequence(str,"");
  return 0;
}
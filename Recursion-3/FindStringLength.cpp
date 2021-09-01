#include<iostream>
using namespace std;

int getLength(char str[]) {
  if(str[0] == '\0') {
    return 0;
  }
  cout << str << endl;
  int length = getLength(str+1);
  return 1 + length;
} 
int main() {
  char str[100] = "";
  cin >> str;
  cout << "Initially String is: " << str << endl;
  int length = getLength(str);
  cout << "Length of String is: " << length << endl;
  return 0;
}
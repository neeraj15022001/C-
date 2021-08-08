#include <iostream>
#include <cstring>
#include<string>
using namespace std;

string getCompressedString(string &str) {
  int count = 0, i = 0;
  string tempString = "";
  while(str[i] != '\0') {
    if(str[i] != str[i+1]) {
      count++;
      if(count > 1) {
        tempString += str[i];
        string s = to_string(count);
        tempString += s;
      }
      else {
         tempString += str[i];
      }
      // cout << "str[i]: " << str[i] << "\tcount: " << count << endl;
      // cout << tempString << endl;
      count = 0;
      i++;
      continue;
    }
    count++;
    // cout << "str[i]: " << str[i] << "\tcount: " << count << endl;
    i++;
    // cout << tempString << endl;
  }
  return tempString;
}
int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}
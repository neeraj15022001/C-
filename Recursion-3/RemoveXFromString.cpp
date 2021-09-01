#include<iostream>
using namespace std;

void removeX(char str[]) {
  if(str[0] == '\0') {
    return;
  }
  if(str[0] == 'x') {
    int i = 1;
    for(; str[i] != '\0'; i++) {
      str[i-1] = str[i];
    }
    str[i-1] = str[i];
    removeX(str);
  } else {
    removeX(str + 1);
  }
}
int main() {
  char str[100] = "";
  cin >> str;
  cout << "Initially String is: " << str << endl;
  removeX(str);
  cout << "Now String is: " << str << endl;
  return 0;
}
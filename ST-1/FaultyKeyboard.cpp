#include <iostream>
#include<cstring>
using namespace std;
// TODO: Still one test case failing 5/6(working)
bool canType(string s1, string s2) {
    int i = 0, j = 0;
    bool type = false;
    while(s1[i] != '\0' && s2[j] != '\0') {
        if(s1[i] == s2[j]) {
            i++;
            j++;
            type = true;
        }
        else {
            j++;
            type = false;
        }
    }
    if(s1[i] != '\0')
        type = false;
    while(s2[j] != '\0') {
      if(s1[i-1] != s2[j]) {
        type = false;
        break;
      }
      j++;
    }
    return type;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << (canType(a, b) ? "true\n" : "false\n");
    }
}
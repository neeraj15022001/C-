#include <iostream>
using namespace std;

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
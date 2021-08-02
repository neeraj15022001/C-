#include <iostream>
#include <cstring>
using namespace std;
void printSubstrings(char input[]) {
	int length = strlen(input);
    for(int i = 0; i < length; i++) {
        int start = i;
        // cout << "i loop" << endl;
        for(int j = i; j < length; j++) {
          // cout << "j loop" << endl;
            int end = j;
            for(int k = start; k <= end; k++) {
                cout << input[k];
            }
            cout << endl;
        }
    }
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}
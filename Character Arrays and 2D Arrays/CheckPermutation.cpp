#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
	int length1 = strlen(input1);
    int length2 = strlen(input2);
    if(length1 != length2)
        return false;
    else {
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < length1; i++) {
            sum1 += input1[i];
            sum2 += input2[i];
        }
        if(sum1 == sum2)
            return true;
        else
            return false;
    }
}
int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}
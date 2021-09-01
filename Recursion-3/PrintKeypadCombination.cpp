#include <iostream>
#include <string>
using namespace std;

string getCorrespondingArray(int number) {
    switch(number) {
        case 2:
            return "abc";
        case 3:
            return "def";
        case 4:
            return "ghi";
        case 5:
            return "jkl";
        case 6:
            return "mno";
        case 7:
            return "pqrs";
        case 8:
            return "tuv";
        case 9:
            return "wxyz";
    }
}
void helper(int num, string output) {
    if(num == 0) {
        cout << output << endl;
        return;
    }
    string arr = getCorrespondingArray(num%10);
    for(int i = 0; i < arr.size(); i++) {
        helper(num/10, arr[i] + output);
    }
}
void printKeypad(int num){
    helper(num, "");
}

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}

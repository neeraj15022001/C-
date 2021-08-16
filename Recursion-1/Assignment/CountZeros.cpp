#include <iostream>
using namespace std;


int countZeros(int n) {
	if(n/10 == 0)
        return (n%10 == 0 ? 1 : 0);
    int smallOutput = countZeros(n/10);
    return (n%10 == 0 ? ++smallOutput : smallOutput);
}



int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}

#include <iostream>
using namespace std;

int multiplyNumbers(int m, int n) {
	if(n == 1)
        return m;
    int smallOutput = multiplyNumbers(m, n - 1);
    return smallOutput + m;
}



int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}

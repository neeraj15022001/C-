#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int sI = 0, eI = 10-1;
    while (sI <= eI) {
        int temp = arr[sI];
        arr[sI++] = arr[eI];
        arr[eI--] = temp;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}

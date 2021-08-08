#include <iostream>
using namespace std;

void print2DArray(int **input, int r, int c) {
  for(int i = 0; i < r; i++) {
    int k = r - i;
    while(k-- != 0) {
      for(int j = 0; j < c; j++) {
        cout << input[i][j] << '\t';
      }
      cout << endl;
    }
  }
}
int main() {
    int row, col;
    cin >> row >> col;

    int **input = new int*[row];
    for(int i = 0; i < row; i++) {
	    input[i] = new int[col];
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    print2DArray(input, row, col);
}


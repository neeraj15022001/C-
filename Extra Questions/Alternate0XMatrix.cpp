//Create a matrix with alternating rectangles of O and X
#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout << "Enter rows and column respectively" << endl;
    cin >> n >> m;
    int minRow = 0, maxRow = n - 1, minCol = 0, maxCol = m - 1;
    char matrix[n][m];
    int  count = 0;
    while (minRow <= maxRow && minCol <= maxCol) {
        for(int i = minCol; i <= maxCol; i++) {
		matrix[minRow][i] =  ((count%2 == 0) ? 'X' : '0');
        }
        minRow++;
        for (int i = minRow; i <= maxRow; i++) {
		matrix[i][maxCol] =  ((count%2 == 0) ? 'X' : '0');
        }
        maxCol--;
        for (int i = maxCol; i >= minCol; i--) {
		matrix[maxRow][i] =  ((count%2 == 0) ? 'X' : '0');
        }
        maxRow--;
        for (int i = maxRow; i >= minRow; i--) {
		matrix[i][minCol] =  ((count%2 == 0) ? 'X' : '0');
        }
        minCol++;
	count++;
    }
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

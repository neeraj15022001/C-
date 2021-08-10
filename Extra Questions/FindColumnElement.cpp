#include<iostream>

using namespace std;

int main() {
    int r, c;
    cout << "Enter Row and Column Respecticely" << endl;
    cin >> r >> c;
    int matrix[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    int min_row = 0, column[r];
    for (int i = 0; i < r; i++)
        column[i] = c - 1;

    for (int i = 0; i < r; i++) {
        if (matrix[min_row][column[min_row]] > matrix[i][column[i]])
            min_row = i;
    }

    int numberOfRowsEqual = 1;
    while (numberOfRowsEqual < r && numberOfRowsEqual >= 0) {
        for (int i = 0; i < r; i++) {
            if (matrix[i][column[i]] == -1)
                continue;
            if (i == min_row)
                continue;
            if (column[i] < 0) {
                numberOfRowsEqual = -1;
                break;
            } else if (matrix[i][column[i]] > matrix[min_row][column[min_row]]) {
                column[i]--;
            } else if (matrix[i][column[i]] == matrix[min_row][column[min_row]]) {
                numberOfRowsEqual++;
                matrix[i][column[i]] = -1;
            }
        }
    }
    //    cout << "Number of Rows Equal: " << numberOfRowsEqual << endl;
    if (numberOfRowsEqual == r)
        cout << matrix[min_row][column[min_row]] << endl;
    else if (numberOfRowsEqual == -1)
        cout << -1 << endl;
    return 0;
}

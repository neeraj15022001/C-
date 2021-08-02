#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
	int minRow = 0, maxRow = nRows - 1, minCol = 0, maxCol = nCols - 1;
    while (minRow <= maxRow && minCol <= maxCol) {
        for(int i = minCol; i <= maxCol; i++) {
            cout << input[minRow][i] << " ";
        }
        minRow++;
        for (int i = minRow; i <= maxRow; i++) {
            cout << input[i][maxCol] << " ";
        }
        maxCol--;
        for (int i = maxCol; i >= minCol; i--) {
            cout << input[maxRow][i] << " ";
        }
        maxRow--;
        for (int i = maxRow; i >= minRow; i--) {
            cout << input[i][minCol] << " ";
        }
        minCol++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}
#include <iostream>
using namespace std;

void findLargest(int **input, int nRows, int mCols)
{
  if(nRows == 0 && mCols == 0)
    cout << "row 0 -2147483648";
  else {
  int INT_MIN = -2147483648;
	int colSum = INT_MIN, colIndex = 0;
	for(int i = 0; i < mCols; i++) {
        int tempSum = 0;
        for(int j = 0; j < nRows; j++) {
            tempSum += input[j][i];
        }
        if(tempSum > colSum) {
          colSum = tempSum;
          colIndex = i;
        }
  }
  int rowSum = INT_MIN, rowIndex = 0;
  for(int j = 0; j < nRows ; j++) {
    int tempSum = 0;
    for(int i = 0; i < mCols; i++) {
      tempSum += input[j][i];
    }
    if(tempSum > rowSum) {
      rowSum = tempSum;
      rowIndex = j;
    }
  }
  if(rowSum >= colSum)
    cout << "row " << rowIndex << " " << rowSum;
  else
    cout << "column " << colIndex << " " << colSum;
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

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}
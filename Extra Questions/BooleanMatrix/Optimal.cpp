#include<iostream>
using namespace std;

int main() {
	bool row_flag = false;
	bool col_flag = false;
	int r,c;
	cin >> r >> c;
	int matrix[r][c];
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cin >> matrix[i][j];
		}
	}
	
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			if( i == 0 && matrix[0][j] == 1) {
				row_flag = true;
			}
			if(j == 0 && matrix[i][0] == 1) {
				col_flag = true;
			}
			if(matrix[i][j] == 1) {
				matrix[0][j] = 1;
				matrix[i][0] = 1;
			}
		}
	}

	for(int i = 1; i < r; i++) {
		if(matrix[i][0] == 1) {
			for(int j = 1; j < c; j++) {
				matrix[i][j] = 1;
			}
		}
	}

	for(int j = 1; j < c; j++) {
		if(matrix[0][j] == 1) {
			for(int i = 1; i < r; i++) {
				matrix[i][j] = 1;
			}
		}
	}

	if(row_flag == true) {
		for(int j = 0; j < c; j++) {
			matrix[0][j] = 1;
		}
	
	}
	if(col_flag == true) {
		for(int i = 0; i < r; i++) {
			matrix[i][0] = 1;
		}
	}

	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cout << matrix[i][j];
		}
		cout << endl;
	}
	
	return 0;
}

#include<iostream>
using namespace std;

int main() {
	int r,c;
	cin >> r >> c;
	int matrix[r][c];
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cin >> matrix[i][j]; 
		}
	}
	int row[r];
	int col[c];
	//initializing arrays to 0
	for(int i = 0; i < r; i++) {
		row[i] = 0;
	}
	for(int i = 0; i < c; i++) {
		col[i] = 0;
	}
	
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			if(matrix[i][j] == 1) {
				row[i] = 1;
				col[j] = 1;
			}
		}
	}
	for(int i = 0; i < r; i++) {
		if(row[i] == 1) {
			for(int j = 0; j < c; j++) {
				matrix[i][j] = 1;
			}
		}
	}
	for(int j = 0; j < c; j++) {
		if(col[j] == 1) {
			for(int i = 0; i < r; i++) {
				matrix[i][j] = 1;
			}
		}
	}

	for(int i = 0; i < r; i++) {
		for( int j = 0; j < c; j++) {
			cout << matrix[i][j];
		}
		cout << endl;
	}

	return 0;
}

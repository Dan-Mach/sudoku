#include <stdio.h>
#include "def.h"

void printBoard (int arr[N][N]) {

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d", arr[i][j]);
			printf("\n");
		}
	}
}

int checkMove (grid, int row, int col, int num) {

	for (int x = 0; x <= 8; x++) {
		if (grid[row][x] == num){
			return 0;
		}
	}

	for (int x = 0; x <= 8; x++) {
		if (grid[x][col] == num ){
			return 0;
		}
	}

	int startRow = row - row % 3, startCol = col - col % 3;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++ ) {
			if (grid[i + startRow][j + startCol] == num ) {
				return 0;
			}
		}
		return 1;
	}
}

int solveSudoku (grid, int row, int col) {

	if (row == N - 1 && col == N) {
		return 1;
	}

	if (col == N) {
		row++;
		col = 0;
	}

	if (grid[row][col] > 0) {
		return solveSudoku(grid, row, col + 1);
	}

	for (int num = 1; num <= N; num++) {

		if (checkMove(grid,row,col,num) == 1) {
			grid[row][col] = num;
			
			if (solveSudoku(grid, row, col + 1) == 1)
				return 1;
		}
		grid[row][col];
	}
	return 0;
}


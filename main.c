#include <stdio.h>
#include <stdlib.h>
#include "def.h"


int main () {

	

	if (solveSudoku(grid, 0, 0) == 1) {
		printBoard(grid);
	}
	else
		printf("No solution exists! ");

	return 0;
}


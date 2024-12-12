#include <stdio.h>
#include <stdlib.h>
#include "def.h"


int main () {

	s_board board [1];
	
	for (int rank = 0; rank < N; rank++) {
		for (int file = 0; file < N; file++) {
			board[0].grid1[rank][file] = (int *)malloc(sizeof(int));
			if (board[0].grid1[rank][file] != NULL) {
				*(board[0].grid1[rank][file]) = 0;
			}
		}
	}

	*(board[0].grid1[0][0]) = 1;
	*(board[0].grid1[7][7]) = 2;
	*(board[0].grid1[0][2]) = 3;
	*(board[0].grid1[9][7]) = 4;
	*(board[0].grid1[0][1]) = 5;
	*(board[0].grid1[8][7]) = 6;
	*(board[0].grid1[1][0]) = 7;
	*(board[0].grid1[4][7]) = 8;

	printBoard (board);

	for (int rank = 0; rank < N; rank++) {
		for (int file = 0; file < N; file ++) {
			free(board[0].grid1[rank][file]);
		}
	}


	return 0;

}


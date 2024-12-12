#include <stdio.h>
#include "def.h"


void printBoard (const s_board *pos) {
	int rank, file; 
	int grid1[N][N];
	for (rank = RANK_9; rank >= RANK_1; rank--) {
        printf("%d ", rank + 1);
        for (file = FILE_1; file <= FILE_9; file++) {
            printf("%c ", grid1[N][N] );
        }
        printf("\n");
    }

}


#include <stdio.h>
#include "def.h"


void printBoard (const s_board *pos) {
	int rank, file; 
	for (rank = RANK_9; rank >= RANK_1; rank--) {
        printf("%d ", rank + 1);
        for (file = FILE_1; file <= FILE_9; file++) {
            if (pos->grid1[rank][file] != NULL) {
				printf("%d ",*(pos->grid1[rank][file]));
			}
			else{
				printf(".");
			}
        }
        printf("\n");
    }
	printf("\n");
    for (file = FILE_1; file <= FILE_9; file++) {
        printf("%d ", file + 1 );
    }

}


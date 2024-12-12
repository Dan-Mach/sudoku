#ifndef DEFS_H
#define DEFS_H
#include <stdio.h>
#define N 9

enum { FILE_1, FILE_2, FILE_3, FILE_4, FILE_5, FILE_6, FILE_7, FILE_8, FILE_9 };
enum { RANK_1, RANK_2, RANK_3, RANK_4, RANK_5, RANK_6, RANK_7, RANK_8, RANK_9 };
enum num {
    A1 =  1, B1, C1, D1, E1, F1, G1, H1, I1,
    A2 = 10, B2, C2, D2, E2, F2, G2, H2, I2,
    A3 = 19, B3, C3, D3, E3, F3, G3, H3, I3,
    A4 = 28, B4, C4, D4, E4, F4, G4, H4, I4,
    A5 = 37, B5, C5, D5, E5, F5, G5, H5, I5,
    A6 = 46, B6, C6, D6, E6, F6, G6, H6, I6, 
    A7 = 55, B7, C7, D7, E7, F7, G7, H7, I7,
    A8 = 64, B8, C8, D8, E8, F8, G8, H8, I8,
	A9 = 73, B9, C9, D9, E9, F9, G9, H9, I9 };


typedef struct {
	int *grid1[N][N];
}s_board;

extern void printBoard (const s_board *pos) ;
#endif
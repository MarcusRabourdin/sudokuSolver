#ifndef SUDOKU_H
#define SUDOKU_H

#define SIZE 9

int isCorrect(int grid[SIZE][SIZE], int current,int col, int ligne);
int findEmpty(int grid[SIZE][SIZE], int *col, int *ligne);
void printGrid(int grid[SIZE][SIZE]);
int solve(int grid[SIZE][SIZE]);


#endif
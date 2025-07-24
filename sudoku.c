#include <stdio.h>
#include "sudoku.h"


int grid[SIZE][SIZE] = {
    {1,0,0,0,0,7,0,9,0},
    {0,3,0,0,2,0,4,0,8},
    {0,0,9,6,0,0,5,0,0},
    {0,0,5,3,0,0,9,0,0},
    {0,1,0,0,8,0,0,0,2},
    {6,0,0,0,0,4,0,0,0},
    {3,0,8,0,0,0,1,0,0},
    {0,4,0,0,0,0,0,0,7},
    {0,0,7,0,0,0,3,0,0}
};


int main(){
    
    //printGrid(grid);
    // isCorrect(grid,1,0,0);
    //findEmpty(grid,col,ligne);
    //printGrid(grid);
    if (solve(grid)) {
        printf("Solution trouvée :\n");
        printGrid(grid);
    } else {
        printf("Aucune solution possible.\n");
    }
    return 0;
}

int isCorrect(int grid[SIZE][SIZE], int current, int col, int ligne){
    // check col && ligne

    for(int i = 0; i<SIZE; i++){
        if(grid[i][col] == current) return 0;
        if(grid[ligne][i] == current) return 0;
    }

    // Check sub square

    int sub_ligne = ligne - ligne % 3;
    int sub_col = col - col % 3;

    for(int i = sub_ligne; i<3+sub_ligne; i++){

        for(int j = sub_col; j<3+sub_col; j++){
            if(grid[i][j] == current) return 0;
        }
        
    }
    
    return 1;
   
}

int findEmpty(int grid[SIZE][SIZE], int *col, int *ligne){
    

    for(int i = 0; i<SIZE; i++){
        for(int j = 0; j<SIZE; j++){
            //printf("(i,j) = (%d,%d)\n",i,j);
            //printf("grid[i][j] = %d\n",grid[i][j]);
            if(grid[i][j] == 0){
                *ligne = i;
                *col = j;
                return 1;
            }
        }
    }

    return 0;
}

int solve(int grid[SIZE][SIZE]){
    int a = 0;
    int b = 0;
    int *col = &a;
    int *ligne = &b;
    if(!findEmpty(grid,col,ligne)) return 1;

    for(int i = 1; i<=SIZE;i++){
        if(isCorrect(grid,i,*col,*ligne)){
            grid[*ligne][*col] = i;
            if(solve(grid)){
                return 1;
            }
            grid[*ligne][*col] = 0;
        }
    }
    
    return 0;
}

void printGrid(int grid[SIZE][SIZE]){

    for(int i = 0; i<SIZE; i++){
        if(i%3 == 0)printf("------------------------\n");
        for(int j = 0; j<SIZE; j++){
            if(j % 3 == 0) printf("| ");
            printf("%d ",grid[i][j]);
        }
        printf("\n");
    }
}
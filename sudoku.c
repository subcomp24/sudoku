#include<stdio.h>
int puzzle[9][9] = {
    {3,0,0,0,2,0,0,7,0},
    {9,0,0,5,0,0,0,1,4},
    {0,1,6,3,7,0,0,0,8},
    {2,0,0,8,0,0,0,0,1},
    {5,0,0,0,4,1,8,0,0},
    {0,8,9,0,0,0,0,5,0},
    {0,0,5,0,1,0,2,8,0},
    {0,4,0,0,0,6,0,9,3},
    {7,3,1,0,8,2,0,0,0},

};

void printPuzzle(int puzzle[9][9]);
int validMove(int puzzle[9][9],int row, int column, int number);

int main (){
    printPuzzle(puzzle);

    return 0;

}



int validMove(int puzzle[9][9],int row,int column,int number){

    // row check
    for(int i=0;i<9;i++){
        if (puzzle[row][i]==number){
            return 0 ;
        }
    }

    // column check
    for(int i=0;i<9;i++){
        if (puzzle[i][column]==number){
            return 0 ;
        }
    }

    int r=row-row%3;
    int c=column-column%3;

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if(puzzle[r+i][c+j]==number){
                return 0;
            }
        }
    }

    return 1;
}

void printPuzzle(int puzzle[9][9]){
    
  printf("\n+-------+-------+-------+\n");
  for(int row=0;row<9;row++){
        
        if(row%3==0 && row!=0){
         printf("|-------+-------+-------|\n");
        }
     
     for(int column=0;column<9;column++){
        if(column%3==0){
            printf("| ");
        }
        if(puzzle[row][column]==0){
            printf(". ");
        } else {
            printf("%d ", puzzle[row][column]);
        }
     }
    
     printf("|\n");
  }
 printf("+-------+-------+-------+\n");
}
    
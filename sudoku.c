#include<stdio.h>
int puzzle[9][9] = {
    {3,0,0,0,2,0,0,7,0},
    {0,0,0,6,0,0,0,0,0},
    {0,9,8,0,0,0,0,6,0},
    {8,0,0,0,6,0,0,0,3},
    {4,0,0,8,0,3,0,0,1},
    {7,0,0,0,2,0,0,0,6},
    {0,6,0,0,0,0,2,8,0},
    {0,0,0,4,1,9,0,0,5},
    {0,7,0,0,8,0,0,1,7},

};

void printPuzzle(int puzzle[9][9]);


int main (){
    printPuzzle(puzzle);

    return 0;

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
    
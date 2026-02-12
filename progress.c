#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

struct Progressbar {
    int id;
    int progress;
    int step;
}task;

void printProgress(struct Progressbar task);
void clearScreen();

int main(){
    task.id=1;
    task.progress=0;
    task.step=10;

   
   int notcomplete=1;
    while(notcomplete){
        notcomplete=0;
        
         task.progress+=task.step;
         if(task.progress>100){
            task.progress=100;
         }
         if(task.progress<100){
            notcomplete=1;
         }
        printProgress(task); 
        clearScreen();   
        sleep(1);

    }
    printf("Sudoku solution found!\n");
    return 0;
}

void printProgress(struct Progressbar task){
 const int barLength=50;
    int barsToShow=(task.progress*barLength)/100;
    printf("Sudoku solution incoming %d :[",task.id);
    for(int i=0;i<=barLength;i++){
        if(i<=barsToShow){
            printf("=");
        } else {
            printf(" ");
        }
    }
    printf("] %d%%\n",task.progress);
}

void clearScreen(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");    
    #endif
}
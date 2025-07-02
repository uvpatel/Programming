#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>



int main(){
    srand(time(NULL)); // for diff num
    char guessWords[][16] = {
        "green",
        "yellow",
        "Purple",
        "Window",
        "linux"
        "apple"


    };

    // index for random word
    int randomIndex = rand() % 6;

    int numLive = 5;
    int numCorrect = 0;
    int oldCorrect = 0;
    int lenghtofword = strlen(guessWords[randomIndex]);
    int letterGuessed[8] = {0,0,0,0,0,0,0,0};


    int quit = 0;

    





    int loopIndex = 0;
    int fullrand = 0;
    for (loopIndex = 0; loopIndex < 5; loopIndex++)
    {
       fullrand = rand();
       randomIndex = fullrand % 6;
       printf("%d -> %d\n",fullrand,randomIndex);
    }
    

    return 0;
}
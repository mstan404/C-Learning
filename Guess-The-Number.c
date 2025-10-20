#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)

{
    srand (time(NULL));
    int number = rand () % 100 + 1;
    int guess = 0;
    
    
    printf ("Welcome to the guessing game!\n Enter a number between 1-100:\n");
    scanf ("%d" , &guess);
        
    while (guess != number){
    if (guess > number)
        printf ("Too high, try again!\n");
    else if (guess < number)
        printf ("Too low, try again!\n");
        
        scanf ("%d" , &guess);
    }
            printf ("Congratulations you guessed the correct number!\n");
    
    
    
        
    }
    
    


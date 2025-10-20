#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float balance = 1000.00;
    
    printf ("Welcome to the World's Best ATM\n");
    printf ("Please selection an option below:\n");
    
    int choice;
    
    printf ("1. Check Balance\n2. Deposit Cash\n3. Withdraw Cash\n4. Exit\n");
    scanf ("%d" , &choice);
    
    if (choice == 1) {
        printf ("Your balance is %.2f\n" , balance);
    }
    if (choice == 2) {
        float deposit;
        
        printf ("How much would you like to deposit?:\n");
        scanf ("%f" , &deposit);
        balance = balance + deposit;
        printf ("Your new balance is %.2f\n" , balance);
        
    }
        
    if (choice == 3) {
        float withdraw;
        printf("How much would you like to withdraw?:\n");
        scanf("%f", &withdraw);
        
        if (withdraw > balance) {
            printf("Insufficient funds!\n");
        } else {
            balance = balance - withdraw;
            printf("Your new balance is %.2f\n", balance);
        }
    }
    
                
    if (choice == 4){
        printf ("Goodbye!\n");
        
        exit(0);
    }
    }

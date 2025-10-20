#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int num1;
    int num2;
    
    printf ("Enter first number:");
    scanf ("%d" , &num1);
    printf ("Enter second number:");
    scanf ("%d" , &num2);
    
    int choice;
    
    printf ("Choose an operation:\n 1 = Add 2 = Subtract 3 = Multiply 4 = Divide\n");
    scanf ("%d" , &choice);
    
    int result = 0;
    float resultdiv = 0.0;
    
    if (choice == 1)  result = num1 + num2;
    if (choice == 2) result = num1 - num2;
    if (choice == 3) result = num1 * num2;
    if (choice == 4) resultdiv = (float) num1 / num2;
    
    if (choice >=1 && choice <=4) {
        if (choice ==4)
            printf("The result is %.2f\n", resultdiv);
        else
            printf ("The result is %d" , result);
    } else {
        printf ("Error, please pick a number between 1 - 4");
        
    }
    
    
    
    
    
    
    
    
    
    
    
}


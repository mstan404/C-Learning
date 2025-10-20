#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int numstudents;
    printf ("Please enter the number of students:\n");
    scanf ("%d", &numstudents);
    
    int grades [numstudents];
    for (int i = 0; i < numstudents; i++) {
        printf ("Enter grade for student %d:\n" , i + 1);
        scanf ("%d", &grades[i]);
    }
    int sum = 0;
    for (int i = 0; i < numstudents; i++) {
        sum = sum + grades[i];
    }
        
        float average = (float)sum / numstudents;
        printf ("The average grade for the students is: %.2f\n" , average);
        
    
    
    
}


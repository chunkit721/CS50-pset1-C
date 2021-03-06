/******************************************************************
* 
* Basil Siddiqui - PSet1 - mario.c
*
* This program asks the user for the height of a half pyramid
* and then generates that half pyramid using spaces and hash tags.
*
*******************************************************************/

// include the libraries that contain functions I will be using
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{   
    // start by getting an integer
    int i;
    printf("What is the half pyramid's height? ");
    i = GetInt();
    
    // if the integer is not between 0 and 23, notify the user of the bounds and re-prompt for pyramid's height
    while (i >=24 || i < 0)
    {
        printf("The half pyramid's height must be a non-negative integer < 24.\n");
        printf("What is the half pyramid's height? ");
        i = GetInt();
    }  
    
    // create the pyramid
    for (int h = 0; h < i; h++)
    {
        // print spaces
        for (int r = 2; r <= i - h; r++)
            {
                printf(" ");
            }
        
        // print hash tags
        for (int r = 0; r <= h + 1; r++)
            {
                printf("#");
            }
        
        // print new line
        printf("\n");
    }
    
    // return 0 to indicate no error has occured    
    return 0;
}

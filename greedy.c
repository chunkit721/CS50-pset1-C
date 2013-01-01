/**********************************************************************
* 
* Basil Siddiqui - PSet1 - greedy.c
*
* This program asks the user for change due and then returns the 
* smallest amount of coins that can be used to distribute that change
*
***********************************************************************/

// include the libraries that contain functions I will be using
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{   
    // start by getting a float
    float change;
    printf("How much change is owed? ");
    change = GetFloat ();
    
    // if the float is negative, notify the user of the bounds and reprompt for change owed
    while (change < 0)
    {
        printf("You must enter a positive value.\n");
        printf("How much change is owed? ");
        change = GetFloat ();
    }
    
    // convert the float value for change owed into an integer value for cents owed
    int cents = round (change * 100);
    
    // create a variable to keep tally of coins due   
    int coins = 0;
    
    // while cents owed is >= to a quarter, subtract a quarter and add 1 count to coins due
    while (cents >= 25)
    {
        cents -= 25;
        coins ++;
    }
    
    // while cents owed is >= to a dime, subtract a dime and add 1 count to coins due
    while (cents >= 10)
    {
        cents -= 10;
        coins ++;
    }
    
    // while cents owed is >= to a nickel, subtract a nickel and add 1 count to coins due
    while (cents >= 5)
    {
        cents -= 5;
        coins ++;
    }
    
    // while cents owed is >= to a penny, subtract a penny and add 1 count to coins due
    while (cents >= 1)
    {
        cents -= 1;
        coins ++;
    }
    
    // display the number of coins that have been tallied up 
    printf("%d\n", coins);
    
    // return 0 to indicate no error has occured    
    return 0;
}

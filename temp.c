#include <cs50.h>
#include <stdio.h>

/**
 * 
 * temp.c
 *
 * Converts a user-supplied temp in C to F and prints the results with one
 * decimal place.
 *
 * F = (9/5)*C + 32
 *
 **/
 
 int main (void)
 {
    printf("C: ");
    
    float celsius = GetFloat();
    float fahrenheit = ((celsius * 9) / 5) + 32;
    
    printf("F: %.01f\n", fahrenheit);
    
    return 0 ;
 }
 

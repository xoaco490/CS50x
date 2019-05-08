#include <cs50.h>
#include <stdio.h>
//main function that only outputs integers
int main(void)
{
    //Asks the int for the height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    // If is not an integer and is greater than 8 or less than 1 it makse it iterate again
    while (n < 1 || n > 8);
    //loop for going from 0 to N of input
    for (int i = 0;i < n; i++)
    {
        //loop for spaces for the hashes
        for (int j = 1;j <= n;j++)
        {
            //if i+j is less than height prints a space
            if(i + j < n)
            {
                printf(" ");
            }
        }
        //loop for hashes
        for (int c=0;c <= i;c++)
        {
            printf("#");
        }
        // Spaces between the two stairs
        printf(" ");
        // Hashes for the second stair
        for (int c=0;c <= i;c++)
        {
            printf("#");
        }
        printf("\n");
        
    }
}

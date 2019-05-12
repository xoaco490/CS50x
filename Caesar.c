#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, string argv[])
{
    //checks if there is no input or NULL
    if (argc < 2 && argv > 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if (argc < 1)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //loop for checking if there is letters instead of numbers for key
    for (int x = 1; x < argc; x++)
    {
        for (int z = 0, y = strlen(argv[x]); z < y; z++)
        {
            if(isdigit(argv[x][z])==0)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
    }
    //checks if the key is a digit
    //Takes the argument that the user inputs and makes it an integer
    int key = atoi(argv[1]);
    //checks if the key that was made is a positive number and if not Usage is returned
    if (key < 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //Plaintext input
    string s = get_string("plaintext: ");
    //Inputs cipher text
    printf("ciphertext: ");
    //Cicle to iterate and check if each character of the string is upper and lower and makes the needed equation to make it ascii and rotate it from z to a if necessary
    for (int j = 0, n = strlen(s);j < n; j++)
    {
        //If lower you do letter + key and subtract 97,then you %26 and + 97 in example if you have
        if (islower(s[j]))
        {
            printf("%c", (((s[j] + key) -97) %26) +97);
        }
            //If upper you do letter + key and substract 65,then you %26 and + 65 in example if you have
        else if (isupper(s[j]))
        {
            printf("%c", (((s[j] + key) -65) %26) +65);
        }
            //Else then is nor an upper nor a lower so is just a punctuation or spaces
        else
        {
            printf("%c", s[j]);
        }
    }
    printf("\n");
}

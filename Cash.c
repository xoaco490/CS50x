#include <cs50.h>
#include <stdio.h>

int coins(float n);

int main(void)
{
    float n = 0.0;
    do
    {
        n = get_float("Cash: ");
    }
    while(n < 0.01);
    coins(n);
}



int coins(float n)
{
    int coins = 0;
    do
    {
        if (n >= 0.25)
        {
            n = (n - 0.25);
            coins++;
            printf("Coins NOW: %i\n", coins);
        }
        else if (n >= 0.10)
        {
            n = (n - 0.10);
            coins++;
            printf("Coins NOW: %i\n", coins);
        }
        else if (n >= 0.05)
        {
            n = (n - 0.05);
            coins++;
            printf("Coins NOW: %i\n", coins);
        }
        else if (n >= 0.01)
        {
            n = (n - 0.01);
            coins++;
            printf("Coins NOW: %i\n", coins);
        }
    }
    while (n > 0);
    printf("Coins: %i\n", coins);
    return 0;
}

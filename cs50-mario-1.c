//
//  cs50-mario-1.c
//  CS50-mario-1
//
//  Created by Mike on 12/07/2020.
//

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            printf(" ");
        }
        for (int y = 0; y < i; y++)
        {
            printf("#");
        }
        printf(" ");
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

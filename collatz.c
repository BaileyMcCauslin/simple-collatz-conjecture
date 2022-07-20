#include <stdio.h>


void collatz( int n );
void nPlusOne( int n );

int main()
{
    int n;
    printf("Enter a number for collatz: ");
    scanf("%d", &n );
    printf("==============================\n\n");
    printf("Regular Collatz 3n + 1 with positive integers\n");
    collatz( n );
    printf("\n\n");
    printf("Regular Collatz 3n + 1 with negative integers\n");
    collatz( -n );
    printf("\n\nn + 1 with positive integers\n");
    nPlusOne( n );
    return 0;
}

void collatz( int n )
{
    if( n != 0 && n != 1 && n != -10 && n != -1 && n != -34 )
    {
        if( n % 2 == 0 )
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }

        printf("N: %d\n" , n );
        collatz( n );
    }
}

void nPlusOne( int n )
{
    if( n != 1 )
    {
        if( n % 2 == 0 )
        {
            n /= 2;
        }
        else
        {
            n = n + 1;
        }

        printf("N: %d\n" , n );
        nPlusOne( n );
    }
}
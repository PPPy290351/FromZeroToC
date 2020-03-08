#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    for(int i=1; i<=9; i++)
    {
        for(int j=1; j<=9; j++)
        {
            printf( "%d x %d = %d\n", i, j, i*j );
        }
        printf("\n");
    }

    // Magic version - single for loop
    for(int i=1; i<=81; i++)
    {
        int a = (i-1)/9 + 1;
        int b = (i-1)%9 + 1;
        printf( "%d x %d = %d\n", a, b, a*b );
    }
    return 0;
}

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    int sum = 0;
    printf( "enter x to sum from 1 : \n" );
    scanf( "%d", &x );
    for( int i=1; i<=x; i++ )
    {
        sum += i;
    }
    printf( "Total : %d\n", sum );

    printf( "============\n" );

    printf( "公式解: (上底 + 下底) * 高 / 2\n" );
    sum = (1 + x) * x / 2;
    printf( "公式解: %d\n", sum );
    return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int loop2Sum( int );
int loop2Factorial( int );
int loop2Mixer( int );
int main(int argc, char const *argv[])
{
    int index;
    printf( "enter n you want to sum : n!\n" );
    scanf( "%d", &index );
    printf( "%d的等差級數 = %d\n", index, loop2Sum( index ) );
    printf( "%d的階乘 = %d\n", index, loop2Factorial( index ) );
    printf( "n個階乘之和 = %d\n", loop2Mixer( index ) );
    return 0;
}
int loop2Sum( int index )   // 等差級數
{
    int result = 0;
    for( int i=1; i<=index; i++ )
    {
        result += i;
    }
    return result;
}
int loop2Factorial( int index ) // 階乘
{
    int result = 1;
    for( int i=1; i<=index; i++ )
    {
        result *= i;
    }
    return result;
}
int loop2Mixer( int index )
{
    int result = 0;
    for( int i=1; i<=index; i++ )
    {
        result += loop2Factorial( i );
    }
    return result;
}

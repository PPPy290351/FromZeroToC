#include <stdlib.h>
#include <stdio.h>

int fibonacci( int );   // f(n) = f(n-1) + f(n-2)
// void hanoi( int n, int src, int dst, int tmp );
int main(int argc, char const *argv[])
{
    int n;
    printf( "fibonacci calculator for n: f(n) = f(n-1) + f(n-2)\n" );
    scanf( "%d", &n );
    printf( "result = %d\n", fibonacci( n ) );
    return 0;
}
int fibonacci( int n )
{
    if( n == 1 || n == 2 )  // case 0 is only include in n=2 -> f(2)=f(1)+f(0), and n=2 return 1
        return 1;
    else
    {
        return fibonacci( n - 1 ) + fibonacci( n - 2 );
    }
}

// void hanoi( int n, int src, int dst, int tmp )
// {
//     if( n == 1 )
//         printf( "%d -> %d\n", src, dst );
//     else{
//         hanoi( n-1, src, tmp, dst );
//         printf( "%d ( %d\n", src, dst );
//         hanoi( n-1, tmp, dst, src );
//     }
// }

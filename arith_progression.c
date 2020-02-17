#include <stdio.h>
#include <stdlib.h>

int main() {

    /* 前情提要 等差數列公式
    *   A : 首項, d : 公差
    *  An = A + (n-1)d
    */
    //TODO: n = 1,2,3,4,5 -> 1,3,5,7,9
    //  a = 1, d = 2 -> An = 1 + 2(n-1) -> An = 2n - 1
    for( int i=1; i<=5; i++ )
    {
        int number = 2*i - 1;
        printf( "%d\n", number );
    }
    printf( "============\n" );
    //TODO: flexible
    for( int i=1; i<=10; i++ )
    {
        if( i % 2 == 1 )    printf( "%d\n", i );
    }
    printf( "============\n" );
    //TODO: list the even number but not the 3-based multiple number (1-10)
    for( int i=1; i<=10; i++ )
    {
        if( i % 2 == 0 && i % 3 != 0 )
            printf( "%d\n", i );
    }
    //  -> simplify (set i == even number) ->
    for( int i=2; i<=10; i+=2 )
    {
        if( i % 3 != 0 )    printf( "%d\n", i );
    }
    return 0;
}

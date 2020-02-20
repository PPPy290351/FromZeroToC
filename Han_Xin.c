#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 韓信點兵 
    *
    * 今有物不知其數，三三數之剩二，五五數之剩三，七七數之剩二，問物幾何
    * x = 2 (mod 3)
    * x = 3 (mod 5)
    * x = 2 (mod 7)
    */

    int number = 1;
    while( !(number % 3 == 2 && number % 5 == 3 && number % 7 == 2) )
    {
        number++;
    }

    int max;
    scanf( "%d", &max );
    int i;
    printf( "韓信點兵 找最小值 by for: \n" );
    for(i=1; i<max; i++)
    {
        if( i % 3 == 2 && i % 5 == 3 && i % 7 == 2 )
            printf( "%d\t", i );

        /*
        MAX: 1000
        韓信點兵 最小值 by for: 
        23      128     233     338     443     548     653     758     863     968
        可以看出每一次都差`105`
        7,5,3的最小公倍數 = 105
        */
    }
    printf( "\n" );
    printf( "韓信點兵 最小值 by while: %d\n", number );
    printf( "韓信點兵 找最大值 BY FOR: \n" );
    
    int answer = 0;
    for(int j = max; j > 1 && answer == 0; j-- )    // Mutiple comparison
    {
        if( j % 3 == 2 && j % 5 == 3 && j % 7 == 2 )
            answer = j;
    }
    printf( "韓信點兵 最大值 : %d\n", answer );
    return 0;
}

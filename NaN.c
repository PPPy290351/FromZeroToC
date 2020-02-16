#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 0;
    int sum = 0;
    int count = -1;
    printf( "enter number to sum:\n" );
    do
    {
        sum = sum + number;
        scanf( "%d", &number );
        count++;
    } while ( number != 0 );
    //FIXME: count > 0 才符合正確的邏輯 否則會有"NAN"的問題
    float average = (float)sum / count;
    printf( "average = %f\n", average );    //但通用編譯器大多已實作nan的例外
    
    return 0;
}

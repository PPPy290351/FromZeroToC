#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Give a sample code
    
    printf( "enter number" );   //--| 
    scanf( "%d", &number );     //----|> N times

    if( number != answer ) printf( "Wrong" )    // (N-1) times

    printf( "Correct!" );   // 1 time

    //TODO: N > N-1, so we need to do the `N` block first
    // and take "compare and do printf&scanf" into a loop
    */

    //FIXME: best solution

    int number, answer;
    answer = 100;
    do{
        printf( "enter number:\n" );
        scanf( "%d", &number );
        if( answer > number )   printf( "Too small\n" );
        else if( answer < number )   printf( "Too large\n" );
    }while( number != answer );
    printf( "Correct!\n" );
    
    return 0;
}

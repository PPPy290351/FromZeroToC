#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define MAXSTACK 100

int stack[MAXSTACK];
int top = -1;

int isPrime( int );
void push( int );
int pop();

int main(int argc, char const *argv[])
{
    int input;
    printf( "enter number (x > 2) : \n" );
    scanf( "%d", &input );

    for( int i=2; i<input; i++ )
    {
        if(! isPrime( i ) )
        {
            push( i );
        }
    }

    int data;
    printf( "from %d to %d Primer : \n", 2, input );
    while( (data = pop()) != -1 )
        printf( "%d/", data );

    return 0;
}
int isPrime( int max )
{
    //開根號可以節省計算, 只要判別到 根號 n
    double result = sqrt( max );
    // printf( "result = %d\n", (int)result + 1 );
    int cmp = (int)result + 1;
    for( int i=2; i<cmp; i++ )
    {
        if( max % i == 0 )
        {
            return 1;
        }
    }
    return 0;
}

//TODO: stack operation
void push( int data )
{
    if( top >= MAXSTACK )
        printf( "STACK FULL!\n" );
    else{
        top++;
        stack[top] = data;
    }
}
int pop()
{
    if( top <= -1 )
        return -1;
    else{
        int data = stack[top];
        top--;
        return data;
    }
}

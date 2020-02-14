#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node Node;
Node *first, *current;

int isPrime( int );
void add( int );
void delete( int );

int main(int argc, char const *argv[])
{
    int input;
    printf( "enter number (x > 2) : \n" );
    scanf( "%d", &input );

    for( int i=2; i<=input; i++ )
    {
        if(! isPrime( i ) )
        {
            add( i );
        }
    }

    current = first;
    do
    {
        int data = current->data;
        current = current->next;
        if( input % data != 0 )
        {
            delete( data );
        }
    } while ( current != NULL );

    current = first;
    do
    {
        printf( "%d\n", current->data );
        current = current->next;
    }while( current != NULL );

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

//TODO: linked-list operation
void add( int data )
{
    if( current == NULL )
    {
       first = (Node*)malloc( sizeof(Node) );
       current = first;
       current->data = data;
       current->next = NULL;
    }else{
        current->next = (Node*)malloc( sizeof(Node) );
        current = current->next;
        current->data = data;
        current->next = NULL;
    }
}
//TODO: previous pointer needed
void delete( int data )
{
    Node *pre, *cur;
    pre = first;
    if( first->data == data )
    {
        first = first->next;
        pre->next = NULL;
    }else{
        cur = first->next;
        while( cur != NULL )
        {
            if( cur->data == data )
            {
                pre->next = cur->next;
                cur->next = NULL;
                break;
            }else{
                pre = cur;
                cur = cur->next;
            }
        }
    }
}

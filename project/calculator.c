#include <stdio.h>
#include <stdlib.h>

int main() {

    printf( "welcome to PPPy calculator\n" );

    /* basic type : integer , float, char */
    /* so we considered that `operation` is char type */
    int num1, num2;
    float result;
    char op;
    scanf( "%d%c%d", &num1, &op, &num2 );
    // if(  )
    switch ( op )
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = (float)num1 / num2;
        break;
    
    default:
        printf( "wrong type operation" );
    }

    printf( "%d %c %d =  %f\n", num1, op, num2, result );

    return 0;
}

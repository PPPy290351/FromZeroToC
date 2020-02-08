#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Swap variable for one level */
    int a,b,c;
    // a(a) - b(b) - c(c) => a(b) - b(c) - c(a)
    int t;
    t = a;
    a = b;
    b = c; // define after use (DU)
    c = t; // DU, no temp variable need


    /* Swap variable for two level */
    // >>  a(a) - b(b) - c(c) => a(b) - b(c) - c(a)  <<
    // First level ( a(b) - b(a) - c(c) )
    t = a;
    a = b;
    b = t;
    // Second level ( a(b) - b(c) - c(a) )
    t = b;
    b = c;
    c = b;

    printf( "=========================================\n" );

    //TODO: order three variable by swapping
    int x, y, z, p;
    scanf( "%d%d%d", &x,&y,&z );
    printf( " before ordering : %d %d %d ", x, y, z );
    // define x < y < z
    if( x > y ){
        p = x;
        x = y;
        y = p;
    }
    if( x > z ){
        p = x;
        x = z;
        z = p;
    }
    if( y > z ){
        p = y;
        y = z;
        z = p;
    }
    printf( " after ordering : %d %d %d ", x, y, z );

    return 0;
}

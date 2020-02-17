#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 0;
    int b;
    
    b = ++a;    // b 得到+完之後的a (a在+之後;+後的a)
    printf( "a=%d, b=%d\n", a, b ); // a=1, b=1
    b = a++;    // b 得到+之前的a   (a在+之前;相+之前的a)
    printf( "a=%d, b=%d\n", a, b ); // a=2, b=1
    a = a++;    // undefined behavior
    /* Explain -> a = a++; */
    int tmp = a;
    a = a + 1;
    a = tmp;
    /* a has dependency , maybe different platform have different order and output */
    printf( "a=%d\n", a );  // output: 2

    return 0;
}

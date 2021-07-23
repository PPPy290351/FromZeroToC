#include <stdio.h>
#include <iso646.h> /* if u want to use 'and' syntax to represent && */

int main() {
    printf("%d\n", 3>2>1);
    /** Each expression execute
     *  Normal operator is left to right
     * -> first : 3 > 2 = 1 
     * ---> 3 > 2 > 1 == 1 > 1
     * -> second : 1 > 1 ? (X)No = 0
    */

    //FIXME: logical operator
    printf("%d\n", (3>2) and (2>1)); // remember & is addrof; need pair of &: &&
    //TODO: operator order ---> 算術運術 (*/%+- ...) > 關係運算 (><= != == ...) > 邏輯運算 (&& , ||)

    int a=1,b=1,c=1,d=1;
    printf("%d\n", (a + b > c - d == a > d));
    printf("%d\n", (a>b && b>c || a<b && b<c));

    //FIXME: special case
    int z = 5;
    if(z = 4) printf("Hello World\n"); // assign operation , result is z value -> if(4) 


    // Increment and Decrement Operators
    float c1 = 10.5, d1 = 100.5;
    printf("++c1 = %f \n", ++c1);
    printf("--d1 = %f \n", --d1);
    printf("++c1 + ++d1 = %f \n", ++c1 + ++d1); // @ 先加自己(++), 再加別人(d1)
    /* // ! Explain
    If you use the ++ operator as a prefix like: ++var, the value of var is incremented by 1; then it returns the value.
    If you use the ++ operator as a postfix like: var++, the original value of var is returned first; then var is incremented by 1. 
    */

    return 0;
}

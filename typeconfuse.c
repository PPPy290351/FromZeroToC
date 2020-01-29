#include <stdio.h>

int main() {
    int a, c;
    double b, d;

    a = b = c = d = 7 / 2.;
    /* different type is not recommend to assign in one line */
    printf("Result: %d\n", a);
    printf("Result: %f\n", b);
    printf("Result: %d\n", c);
    printf("Result: %f\n", d);
    /**
     * Result: 3
     * Result: 3.000000
     * Result: 3
     * Result: 3.500000
     *  == b and d is not the same value ==
    */
    return 0;
}

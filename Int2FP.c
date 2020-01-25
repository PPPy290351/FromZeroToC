#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the score 1: \n");
    scanf("%d", &a);
    printf("enter the score 2: \n");
    scanf("%d", &b);
    printf("enter the score 3: \n");
    scanf("%d", &c);
    
    /* force type-transform */
    double result = (double)(a+b+c)/3;
    /* let divisor to be floating point */
    double result = (a+b+c)/3.;

    printf("Average: %f\n", result);
    return 0;
}

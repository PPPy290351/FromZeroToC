#include <stdio.h>
#include <stdlib.h>

int main() {

    int a,b,c,max;
    scanf("%d%d%d", &a, &b, &c);
    /* find MAX Value */
    /* solution 1 : take pair of variable : a=b/a=c/b=c */
    if(a >= b && a >= c){
        max = a;
    }
    if(b > a && b >= c){
        max = b;
    }
    if(c > a && c > b){
        max = c;
    }
    printf("Max Value is %d\n", max);

    /* solution 2 : Suppose the max value first */
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;
    printf("Max Value is %d\n", max);

    /* find the median value */
    scanf("%d%d%d", &a, &b, &c);
    int med;
    /* sol 1 */
    if(b <= a && a <= c || c <= a && a <= b)
        med = a;
    /* sol 2 : support med value ,and if not; replaced by below code */
    med = a;
    if(a <= b && b <= c || c <= b && b <= a)
        med = b;
    if(b <= c && c <= a || a <= c && c <= b)
        med = c;
    printf("Median value : %d\n", med);

    return 0;
}

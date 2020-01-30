#include <stdio.h>
#include <stdlib.h>

void swap(int* val1, int* val2){
    int tmp = *val1;
    *val1 = *val2;
    *val2 = tmp;
}

//TODO: Sort side1-3
void sort(int* side1, int* side2, int* side3){
    if(*side1 > *side2)
        swap(side1, side2);
    if(*side2 > *side3)
        swap(side2, side3);
    if(*side1 > *side2)
        swap(side1, side2);
}

int pow2(int valbase){
    return valbase * valbase;
}

int regular(int side1, int side2, int side3){
    /* side1 == side2 == side3 is wrong, remember one time one operation */
    /* --> 1 == side3 (X) */
    if(side1 == side2 && side2 == side3){
        // printf("Regular triangle\n");
        return 1;
    }
    return 0;
}
int isosceles(int side1, int side2, int side3){
    if(side1 == side2 || side2 == side3 || side1 == side3){
        return 1;
    }
    return 0;
}
int rectangular(int side1, int side2, int side3){
    if(pow2( side1 ) + pow2( side2 ) == pow2( side3 ) ||
        pow2(side2)+pow2(side3) == pow2(side1) ||
        pow2(side1)+pow2(side3) == pow2(side2)){
        return 1;
    }
    return 0;
}

int main() {
    // unsigned int side1, side2, side3;
    int side1, side2, side3;
    printf("enter 3-lengths for triangle: \n");
    scanf("%d%d%d", &side1, &side2, &side3);
    /* sort with integer */
    sort(&side1, &side2, &side3);
    /* beautiful version ; constraint: sorted needed */
    if(side1 == side3) // after sorting, must 1 <= 2 <= 3, so we can know if 1==3, that all equals
        printf("Regular triangle\n");
    if(side1 == side2 || side2 == side3) // 1 <= 2 <= 3, value of the same side must Neighboring, so 1==2/2==3
        printf("Isosceles triangle\n");
    if( pow2(side1) + pow2(side2) == pow2(side3) ) // 1<=2<=3, 3 is the longest -> hypotenuse ; we could know situation pow(two side) == pow(hypotenuse)
        printf("Rectangular triangle\n");
    /* Original version ; it's still work, but compricated */
    if(regular(side1, side2, side3)) printf("Regular triangle\n");
    if(isosceles(side1, side2, side3)) printf("Isosceles triangle\n");
    if(rectangular(side1, side2, side3)) printf("Rectangular triangle\n");
    return 0;
}

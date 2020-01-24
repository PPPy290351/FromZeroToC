#include <stdio.h>

int main() {
    int integer1, integer2;
    printf("enter number for 1st integer:");
    scanf("%d", &integer1);
    printf("enter number for 2nd integer:");
    scanf("%d", &integer2);
    /* TODO: switch value */
    // Normal solution
    int tmp = integer1;
    integer1 = integer2;
    integer2 = tmp;
    // GodLike solution (limited in integer case)
    integer1 = integer1 + integer2; // 1 = 1 + 2 (1=1,2)
    integer2 = integer1 - integer2; // 2 = 1 - 2 (2=1)
    integer1 = integer1 - integer2; // 1 = 1 - 2 (1=2)
    // CrazyMode solution (XOR case : A xor A = 0)
    integer1 = integer1 ^ integer2;
    integer2 = integer1 ^ integer2; 
    integer1 = integer1 ^ integer2; 

    printf("integer1: %d\n", integer1);
    printf("integer2: %d\n", integer2);
    return 0;
}

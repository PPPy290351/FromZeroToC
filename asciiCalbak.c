#include <stdio.h>

int main() {
    int input, add;
    scanf("%d", &input);
    printf("enter value to jump: \n");
    scanf("%d", &add);
    input += add;
    if(input > 122){
        int temp = input % 122;
        printf("result : %c\n", temp + 64); // 64 as 122
    }
    return 0;
}

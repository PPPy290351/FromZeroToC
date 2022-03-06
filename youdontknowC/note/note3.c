#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COLUMN 5

void show(int * ptr)
{
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            printf("%d", *(ptr + ROW + COLUMN));
            if (j < COLUMN - 1)
                printf(" | ");
        }
        printf("\n");
    }
}

int main(int argc, char ** argv)
{

    int arr [ROW][COLUMN] = {0};
    show(&arr);
    int * ptr2Arr = &arr;
    
    printf("%d\n", ((int **)ptr2Arr)[0]);

    arr[0][0] = 10;

    printf("%d\n", ((int **)ptr2Arr)[0]);
    // ** 可以視為將記憶體操作提升一個維度
    arr[0][0] = 15;

    printf("%d\n", *((int *)ptr2Arr + 0));
    printf("%d\n", ((int *)ptr2Arr)[0]);

    return 0;
}
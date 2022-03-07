#include <stdio.h>

void * world()
{
    char p[] = "world";
    *(p + 2) = 'a';
    printf("%s\n", p);
    return p;
}

int main()
{
    char * p = "hello";
    // *(p + 2) = 'a';  // segamentation fault, because "hello" in static storage (READ-ONLY)
    printf("%s\n", p);

    printf("0x%x", world()); // 0x0; %p: nil; because "world" in stack frame lifecycle.

    return 0;
}
#include <stdio.h>

int main() {
    char input, output;
    scanf("%c", &input);
    /* we know the ascii table from a to A is 32 distance */
    output = input + 32;
    /* explaination */
    output = input + ('a' - 'A');
    printf("%c\n", output);
    return 0;
}

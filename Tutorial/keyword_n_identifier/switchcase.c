#include <stdio.h>
int main(int argc, char const *argv[])
{
    char operator;
    scanf("%c", &operator);
    switch(operator)
    {
        case '+':
            //
            printf("Hi %c", operator);
            break;
        case '-':
            //
            printf("Oh %c", operator);
            break;
    }
    return 0;
}

/* Diagram

---> equals to '+' ---case--- equals to '-'  ------case------.......
        |                          |
        |                          |
        |                          |
        V                          V
     (Hi +) -------------------  (Oh -) ------------------......

     # If no break use, all statements after the matching label are executed.

*/
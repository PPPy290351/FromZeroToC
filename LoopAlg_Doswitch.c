#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* i+j = 30 , i*j = 221 */

    // As we know the limited with for loop is 30, 
    // we could divide the number to improve the interation speed.
    for (int i = 0; i <= 30/2; i++)
    {
        for (int j = 30/2; j <= 30; j++)
        {
            if( (i+j == 30) && (i*j == 221) )
            {
                printf("%d , %d \n", i, j);
            }
        }
    }

    // Crazy solution
    // i variable is defined in the outside for loop
    // so we just need to assume the j variable is (30 - i)
    // and find the i*j is 221 , also get the pairs of numbers 
    for (int i = 0; i <= 30/2; i++)
    {
        int j = 30 - i;
        if (i*j == 221)
        {
            printf("%d , %d \n", i, j);
        }
    }

    /* do-while */
    // switch case to calculate total payment

    printf("Welcome to my store :\n");
    printf("You could bring out 5 items\n");
    printf("----------------------\n");
    printf("1. Cookie $25\n");
    printf("2. Candy  $20\n");
    printf("3. Juice  $30\n");
    printf("4. Cake   $45\n");
    printf("5. Tea    $22\n");
    printf("----------------------\n");
    int order = 0;
    int total = 0;
    int index = 0;
    do
    {
        printf("What do you want to buy? 0 to terminate\n");
        scanf("%d", &index);
        //FIXME: if input is char, it will continue loop until order = 5
        // maybe char is not accepted by %d format string.
        switch (index)
        {
        case 1:
            total += 25;
            order++;
            break;
        case 2:
            total += 20;
            order++;
            break;
        case 3:
            total += 30;
            order++;
            break;
        case 4:
            total += 45;
            order++;
            break;
        case 5:
            total += 22;
            order++;
            break;
        default:
            order = 5; // force terminate
            break;
        }
    } while ( order < 5 );
    printf("Your payment is %d\n", total);

    return 0;
}

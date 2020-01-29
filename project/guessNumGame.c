#include <stdio.h>
#include <stdlib.h>
#include <time.h>

time_t t;
int main() {
    /* put time(&t) as seed to srand */
    srand((unsigned)time(&t));
    
    /* random 5 times with 0-49 
    for(int i=0;i<5;i++){
        printf("%d\n", rand() % 50);
    }
    */
    int answer = (rand() % 100) + 1; // 1-100
    int guess, upbound, inbound;
    upbound = 100;
    inbound = 1;
    while(1){
        printf("enter guess number 1-100: \n");
        scanf("%d", &guess);
        if(guess > answer && guess < upbound){
            upbound = guess;
        }else if(guess < answer && guess > inbound){
            inbound = guess;
        }else if(guess == answer){
            printf(" --- You Win --- \n");
            printf("answer :%d, guess: %d\n", answer, guess);
            break;
        }else{
            printf("====== ====== ====== ====== ======\n");
            printf("range confuse... , your guess: %d\n", guess);
            printf("Range is %d to %d\n", inbound, upbound);
            printf("====== ====== ====== ====== ======\n\n");
            continue;
        }
        printf("Range is %d to %d\n\n", inbound, upbound);
    }
    return 0;
}

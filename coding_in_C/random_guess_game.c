#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int max=100;
    int min=1;
    int guess;
    int guesses=0;
    int answer;
    srand(time(0));
    answer = (rand()%max-min+1)+min;
    do
    {
    printf("enter your guess: ");
    scanf("%d",&guess);

    if (guess>answer)
    {
        printf("your answer is higher than answer!\n");
    }
    else if (guess<answer)
    {
        printf("your answer is lower than answer!\n");
    }
    else 
    {
        printf("your answer is true, congratulations!\n");
    }
    guesses++;
} while (guess!=answer);
    printf("---------------------\n");
    printf("answer: %d\n",answer);
    printf("counted guesses: %d\n",guesses);
    printf("---------------------\n");

}
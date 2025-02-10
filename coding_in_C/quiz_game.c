#include <stdio.h>
#include <ctype.h>
int main(){
    char questions[][70] = { "1- What is the mixture of blue and red? ",
                             "2- Whats's 567-234 ? ",
                             "3- What is the capital of Austria? "};
    char options[][70] = { "A)purple","B)pink","C)orange","D)violet",
                            "A)333","B)233","C)123","D)231",
                           "A)paris","B)vienna","C)Ankara","D)london"};
    char Answers[] = {'D','A','B'};
    int QuestionNum = sizeof(questions)/sizeof(questions[0]);
    int point=0;
    char guess;
    printf("Quiz Game\n");
    for (int i = 0; i < QuestionNum; i++)
    {
        printf("--------------------------\n");
        printf("%s\n",questions[i]);
        printf("--------------------------\n");
       for (int j =(i*4); j < (i*4)+4;j++)
       {
       printf("%s\n",options[j]);
       }
       printf("enter your answer: ");
       scanf(" %c",&guess);
       guess = toupper(guess);
       if (guess==Answers[i])
       {
        printf("correct!\n");
        point++;
       }
       else
       {
        printf("incorrect!\n");
       }
    }
    printf("=======================\n");
    printf("your score: %d/%d\n",point,QuestionNum);
    printf("=======================");
    return 0;
}
    
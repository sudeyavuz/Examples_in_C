#include <stdio.h>
struct Youtubers
{
    char name[15];
    float sub;
};

int main(){
struct Youtubers youtuber1 = {"learnFrench",143.987};
struct Youtubers youtuber2 = {"codingclub",15.987};
struct Youtubers youtuber3 = {"studywithme",134.674398};
struct Youtubers youtubers[] ={youtuber1,youtuber2,youtuber3};
for (int i = 0; i < sizeof(youtubers)/sizeof(youtubers[0]); i++)
{
    printf("Channel: %s\n",youtubers[i].name);
    printf("Subscriber num: %f\n",youtubers[i].sub);
    printf("                              \n");
}
return 0;
}
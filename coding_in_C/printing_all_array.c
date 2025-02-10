#include <stdio.h>
int main(){
    int ages[] ={10,20,30,40};
    for (int i = 0; i < sizeof(ages)/sizeof(ages[0]); i++)
    {
        printf("%d\n",ages[i]);
    }
    return 0;
}
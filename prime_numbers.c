#include <stdio.h>
int main(){
    int number=100;
    int sum=0;
    for (int i = 2; i < number; i++)
    {
        if ( (i==2 || i==3 || i==5 || i==7)||(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0) )
        {
            sum+=i;

        }

    }
    printf("%d\n",sum);
    
}
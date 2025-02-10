#include <stdio.h>
int main(){
    int number=0;
    int sum= 0;
    do{
        printf("Enter a number: ");
        scanf("%d",&number);
        sum +=number;
    }while(number>0);
    printf("Sum of numbers: %d",sum);
}
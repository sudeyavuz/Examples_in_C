#include <stdio.h>
#include <math.h>
int main(){
    int num;
    printf( "1)Addition\n"
            "2)Substraction\n"
            "3)Multiplication\n"
            "4)Division\n"
            "5)Exponent\n"
        "Choose your operation: ");
    do{
        scanf("%d",&num);
        if (num<1||num>5)
        {
        printf("please control the number you enter!");
        printf("Enter an operator again! :");
        }
    }while (num>5||num<1);
    printf("the operator you choose: %d\n",num); 
    int x,y;
    do{
    printf("Enter the numbers you want to operate:");
    scanf("%d",&x);
    scanf("%d",&y);
    if ((num==4) && (y==0))
    {
        printf("Cannot divide by zero! Please enter a valid second number.");
    }
    }while((num==4) && (y==0));
    switch (num)
    {
    case 1:
        x+=y;
        printf("Addition result : %d",x);
        break;
    case 2:
        x-=y;
        printf("Substraction result : %d",x);
        break;
    case 3:
        x*=y;
        printf("Multiplication result : %d",x);
        break;
    case 4:
        printf(" Division result : %.2f",(float)x/y);
        break;
    case 5:
        x=(int)pow(x,y);
        printf("Exponent result : %d",x);
        break;
    default:
        break;
    }   
    return 0;
}
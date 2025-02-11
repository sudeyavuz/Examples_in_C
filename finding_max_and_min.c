#include <stdio.h>
int min(int x,int y){
return (x<y) ? x : y ;
}
int max(int x,int y){
    return (x>y) ? x : y ;
}
int main(){
    int number;
    printf("enter the number of elements: ");
    scanf("%d",&number);
    int arr[number];
    printf("enter the elements: ");
    for (int i = 0; i < number; i++)
    {
        scanf("%d",&arr[i]);

    }
    int Min = arr[0];
    int Max = arr[0];

    for (int i = 1; i < number; i++) {
        Min = min(Min, arr[i]);
        Max = max(Max, arr[i]);
    }
    printf("max number: %d\n",Max);
    printf("min number: %d",Min);
    return 0;
}
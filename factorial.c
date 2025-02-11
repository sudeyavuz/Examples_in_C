#include <stdio.h>
int factorial(int x){
    if(x==0) return 1;//base case without this code wont workout
return x*factorial(x-1);
}
int main(){
    int num = 3;
    printf("%d",factorial(num));
    return 0;
}
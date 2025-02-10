#include <stdio.h>
void printAge(int *pAge){
printf("%d years old.",*pAge);  
}
int main(){
    int age =20;
    int *pAge = &age;
    printAge(pAge);
    return 0;
}
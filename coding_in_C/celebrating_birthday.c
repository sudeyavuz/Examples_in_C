#include <stdio.h>
void birthday(char name[],int age){
    printf("iyiki doğdun %s\n",name);
    printf("%d yaşına girdin!",age);
}
int main(){
    birthday("sude",20);
    return 0;
}
#include <stdio.h>
 void upsideDown(int number){
    for (int i = number; i >= 1; i--) {
        for (int j = number; j > i; j--) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("^");
        }
        printf("\n");
    }

    
}
void normal(int number){
    for (int i = 1; i <= number; i++)
    {
        for (int j = number; j>i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            printf("^");
        }
        printf("\n");
    }
    
}
int main(){
    upsideDown(5);
    normal(5);
    return 0;
}
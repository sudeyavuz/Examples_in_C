#include <stdio.h>
#include <string.h>
int main(){
   /* char a = 'A';
    char b = 'B';
    char temp;
    temp = a;
    a = b;
    b = temp;
    printf("%c\n",a);
    printf("%c\n",b);
    return 0;
    */
   char a[10] = "araba";
   char b[10] = "motor";
   char c[10];
   strcpy(c,a),
   strcpy(a,b);
   strcpy(b,c);
   printf("%s\n",a);
   printf("%s",b);
}
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
 bool isPalindrome(char str[]){
int l=0;
int h = strlen(str)-1;
while (h>1)
{
    if(tolower(str[l++])!= tolower(str[h--])) return false;
    
}
return true;
}
int main(){
    char str[50];
    printf("Enter your word: ");
    scanf("%s",str);
    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
return 0;
}
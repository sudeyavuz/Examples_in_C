#include <stdio.h>
#include <string.h>
int main(){
    char arr[][10] = {"Sude","Zehra","Elif"};
    strcpy(arr[0],"Yasemin");
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%s\n",arr[i]);
    }
    
    return 0;
}
#include <stdio.h>
int main(){
    FILE *file = fopen("//Users//sudenaz//Desktop//coding_in_C//poem.txt","r");
    char buffer[300];
    while (fgets(buffer,300,file)!=NULL)
    {
        printf("%s\n",buffer);
    }
    
    fclose(file);
return 0;
}
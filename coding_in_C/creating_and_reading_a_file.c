#include <stdio.h>
int main(){
    FILE *file = fopen("c.txt","a");
    // FILE *file = fopen("c.txt","w");
    //fprintf(file,"coding in c\n");
    fprintf(file,"adding to a file.");
    fclose(file);
}
// comment ones are for creating a file.
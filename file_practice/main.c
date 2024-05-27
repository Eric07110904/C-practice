#include <stdio.h>
#include <stdlib.h>

int main(){
    /* read file */
    FILE *fptr;
    fptr = fopen("./data2.txt", "r");
    
    char buffer[1024];
    fread(buffer, 1024, 1, fptr);
    printf("%s \n", buffer);
    fclose(fptr);
    return 0;
}
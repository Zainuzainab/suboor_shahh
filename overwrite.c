#include<stdio.h>
int main(){
    FILE *file=fopen("text.c","w");
    if(file== NULL){
        perror("Error creating file");
        return 1;
    }
    fprintf(file,"this is the first line\n");
    fprintf(file,"writing to file will overwite its contents.\n");

    fclose(file);
    printf("file written sucessfully in write mode.\n");
    return 0;
}
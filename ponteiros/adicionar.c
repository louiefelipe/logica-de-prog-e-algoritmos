#include <stdio.h>
#include <time.h>
#define MAX_TXT 256

int main(int argc, char* argv[]){

char texto[MAX_TXT];
FILE *arq = fopen(argv[1], "a");

if(arq == NULL){
    printf("Erro ao abrir arquivo");
    return 1;
}
    
    fprintf(arq, argv[2]);


fclose(arq);

return 0;
}
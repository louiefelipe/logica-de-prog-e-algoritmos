#include <stdio.h>
#include <stdlib.h>
#include "biblioteca_atvd.h"
#define MAX_ARGC 4

int main(int argc, char* argv[]){
    int x, y, z;
     if (argc < 3 || argc > MAX_ARGC) {
        printf("Informe 2 ou 3 argumentos.");
        return 1;
    }
    if (argc == 3){
        x = atoi (argv[1]);
        y = atoi (argv[2]);
        printf("Menor = %d", menor_2n(x, y));
    }
    else if(argc == 4){
        x = atoi (argv[1]);
        y = atoi (argv[2]);
        z = atoi (argv[3]);

        printf("Menor = %d", menor_3n (x, y, z));
        
    }
    else{
        int numeros[argc-1];
        for(int i = 1; i < argc; i++){
            numeros[i-1] = atoi(argv[i]);
            printf("Menor dos %d números = %d", argc-1, menor_n(numeros, argc-1));
        }
    }
   

return 0;
}

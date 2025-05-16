#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(int argc, char* argv[]){
    int x, y, z;
    if(argc < 3){
        printf("Informe 2 ou mais argumentos.");
        return 1;
    }
    if (argc == 3){
        x = atoi (argv[1]);
        y = atoi (argv[2]);
        printf("Maior (%d, %d)", maior_2n(x, y));
    }
    else if(argc == 4){
        x = atoi (argv[1]);
        y = atoi (argv[2]);
        z = atoi (argv[3]);

        printf("Maior(%d, %d, %d)", maior_3n,(x, y, z));
        
    }
    else{
        for(int i = 1; i < argc; i++){
            numeros[i-1] = atoi(argv[i]);
            printf("%d", maior_n(numeros, argc-1));
        }
    }
   

return 0;
}

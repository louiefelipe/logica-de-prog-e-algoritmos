#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 255

int main(int argc, char* agrv[]){
    
    //declaraçao de strings
    char palavra1[] = "Programacao";
    char palavra2[] = {'P','r','o','g','r','a','m','a','c','a','o','\0'}; //terminador especial \0
	char frase1[TAM];
	char palavra3[TAM];
	char palavra4[TAM];

    printf("%s\n", palavra1);
    printf("%s\n", palavra2);

    printf("%c\n", palavra2[5]);

    //Leitura SEGURA de strings
    printf("Escreva uma frase: ");
    fgets(frase1, TAM, stdin);
    printf("%s", frase1);

    printf("Digite uma palavra: ");
    fgets(palavra3, TAM, stdin);
    fflush(stdin);

    printf("Digite outra palavra: ");
    fgets(palavra4, TAM, stdin);
	fflush(stdin);
	
    if(strcmp(palavra3, palavra4) == 0){
        printf("As palavras sao iguais\n");
    }
    else{
        printf("As palavras NAO sao iguais\n");
    }

	printf("O tamanho da palavra 3 eh: %d\n", strlen(palavra3));

for(int i = 0; i < strlen(palavra3); i++){
	printf("%c\n", palavra3[i]);
}
for(int i = strlen(palavra3)-1; i >= 0; i--){
	printf("%c\n", palavra3[i]);
}

strcat(palavra3, palavra4);
printf("Palavra 3 concatenada : %s", palavra3);


    return 0;
}
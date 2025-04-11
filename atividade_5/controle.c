#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char* argv[]){
    int alunos;
    
printf("\tControle de Notas\n");
system("pause");

printf("Insira a quantidade de alunos: ");
scanf("%d", &alunos);

float nota[alunos];

for (int i = 0; i < alunos; i++){
    printf("\nInsira a nota do aluno %d: ", i+1);
    scanf("%f", &nota[i]);

}
for (int i = 0; i < alunos; i++){
    printf("\nNota do aluno %d: %.2f", i, nota[i]);
}

if (nota >= 6){
    printf("Alunos arpovados: ")
}

    return 0;
}
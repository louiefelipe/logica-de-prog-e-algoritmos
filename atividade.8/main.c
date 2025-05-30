#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double X;
    double Y;
} pontos;

double distancia_calc(pontos a, pontos b){
    return sqrt(pow(b.X - a.X, 2) + pow(b.Y - a.Y, 2));
}

int main(int argc, char* argv[]){
    if(argc != 5){ 
        printf("Digite os pontos: %s Xa Ya Xb Yb\n", argv[0]);

        return 1;
}
    
pontos pontosA, pontosB;
pontosA.X = atof(argv[1]);
pontosA.Y = atof(argv[2]);
pontosA.X = atof(argv[3]);
pontosA.Y = atof(argv[4]);

double distancia = distancia_calc(pontosA, pontosB);
printf("Distancia entre os pontos: %.2lf", distancia);



    return 0;
}
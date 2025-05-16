/*
    Retorna o maior entre 2 numeros
*/
int maior_2n(int a, int b){
    int maior;
    if( a > b){
        maior = a;
    }
    else{
        maior = b;
    }
    return maior;
}

/*
    Retorna o maior entre 3 numeros
*/
int maior_3n(int a, int b, int c){
    return maior_2n(maior_2n(a, b), c);
    
}

int maior_n(int numeros[], int n){
   int maior = numeros[0];
   for(int i = 0; i < n-1; i++){
    maior = maior_2n(maior, numeros[i]);
   }
   return maior;
}


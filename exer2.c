#include <stdio.h>
#include <stdlib.h>

#define tam 3

int main(){

    int vetor[tam],
    aux[tam],
    pMenor = 0,
    menor = vetor[0];

    for(int i = 0; i < tam ; i++){
        scanf("%i",vetor[i]);
    }

    for( int i = 0; i < 0 ; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
            pmenor = i;
        }
    }

    for( int i = 0; i < 0 ; i++){

    }

    return 0;
}


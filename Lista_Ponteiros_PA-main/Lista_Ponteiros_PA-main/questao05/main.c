#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for(i=0; i<=4 ; i++){
        printf("\ni = %d", i); // É esperado que imprima o contador i= 0 a 4 //
        printf(" vet[%d] = %.1f", i, vet[i]); // É esperado que imprima valor  de cada indice do vetor // vet[0] = 1.1 vet[1] = 2.2 vet[2] = 3.3 vet[3] = 4.4 vet[4] = 5.5
        printf(" *(f+ %d)= %.1f", i, *(f+i)); // É esperado que imprima o conteudo de cada indice do ponteiro // *(f+0) = 1.1  *(f+1) = 2.2  *(f+2) = 3.3  *(f+3) = 4.4 *(f+4) = 5.5
        printf(" &vet[%d] = %X", i, &vet[i]); // É esperado que imprima o endereço de cada indece do vetor //
        printf(" (f+ %d) = %X", i, f+i); // É espero que imprima o endereço do conteudo do ponteiro // Como o conteudo é um vetor,  vai imprima o endereço de cada indece do vetor
    }
    return 0;
}

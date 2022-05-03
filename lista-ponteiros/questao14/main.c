#include <stdio.h>
#include <stdlib.h>

int compare (const void *a, const void *b){  // ponteiro para void, pode conter qualquer tipo de endereço

    return (*(int*)a - *(int*)b); // Vai converter de "ponteiro para void" para "ponteiro para int" e recurar o valor da posição.
    //Se o retorno for maior que 0, o qsort realiza a troca de posiçao.
}

void crescente (float n){
    float *valores, aux;
    int i, j;
    valores = (float*)malloc(n*sizeof(float));  // Alocando o vetor

    printf("Digite os valores: \n");
    for(i=0; i<n; i++){
        scanf("%f", &valores[i]); //Informando os valores
    }

    printf("\n");

    qsort(valores, n, sizeof(float), compare); //Valores é o endereço do Array; n é o tamanho do Array (quantidade); sizeof(float) é o tamanho em bytes de cada posição do Array; compare é a funçao de comparação, que recebe dois ponteiros para const void.


    // Imressao Em ordem Crescente
    for(i=0; i<n; i++){
        printf("%f \n", valores[i]);
    }

    free(valores);
}

int main(void)
{
    int x;
    printf("Quantos valores deseja digitar? \n");
    scanf("%d", &x);
    crescente(x);
    return 0;
}

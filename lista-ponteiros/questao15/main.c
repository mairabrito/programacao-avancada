#include <stdio.h>
#include <stdlib.h>


int compare2 (const void *a, const void *b) {

   if (*(int*)a > *(int*)b) { // Se a for maior que b, retorna 1
      return 1;
   } else if (*(int*)a < *(int*)b) { // Se a for menor que b, retorna -1
      return -1;
   } else {
      return 0; // Se a for igual a b, retirna 0
   }
}

void crescente (float n){
    float *valores, aux;
    int i, j;
    valores = (float*)malloc(n*sizeof(float));

    printf("Digite os valores: \n");
    for(i=0; i<n; i++){
        scanf("%f", &valores[i]);
    }

    printf("\n");

    qsort(valores, n, sizeof(float), compare2);

    // Em ordem Crescente
    for(i=0; i<n; i++){
        printf("%f \n", valores[i]);
    }

    free(valores);
}

int main()
{
    int x;
    printf("Quantos valores deseja digitar? \n");
    scanf("%d", &x);

    crescente(x);

    return 0;
}

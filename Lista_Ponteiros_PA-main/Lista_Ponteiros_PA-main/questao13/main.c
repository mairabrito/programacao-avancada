#include <stdio.h>
#include <stdlib.h>

void crescente (float n){
    float *v, aux;
    int i, j;
    v = (float*)malloc(n*sizeof(float));

    printf("Digite os valores: \n");
    for(i=0; i<n; i++){
        scanf("%f", &v[i]);
    }

    printf("\n");

    for(i=0; i<n; i++){
        for(j=i; j<n; j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    // Em ordem Crescente
    for(i=0; i<n; i++){
        printf("%f \n", v[i]);
    }

    free(v);
}

int main(void)
{
    int x;
    printf("Quantos valores deseja digitar? \n");
    scanf("%d", &x);
    crescente(x);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void soma(int *v1, int *v2, int*v3, int tamanho){
    int i, j;

    for(i=0; i<tamanho; i++){
        *(v3+i)=*(v1+i) + *(v2+i);
    }
    for(i=0;i<tamanho;i++){
        printf("VetorSoma[%d] = %d \n",i,*(v3+i));
    }
}

int main(void){
    int *a, *b,*vSoma;
    int n, i, j;

    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &n);

    a = (int*) malloc(n*sizeof(int));
    b = (int*) malloc(n*sizeof(int));
    vSoma = (int*) malloc(n*sizeof(int));

    printf("Digite os valores do primeiro vetor: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Digite os valores do segundo vetor: \n",i);
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }

    soma(a,b,vSoma,n);

    free(a);
    free(b);
    free(vSoma);

    return 0;
}

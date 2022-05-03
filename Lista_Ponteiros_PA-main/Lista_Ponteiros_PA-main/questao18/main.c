#include <stdio.h>

void multiplicacao(int *A[][100], int *B[][100], int *C[][100], int lA, int cA, int cB)
{
    int i, j, k;

	for(i=0; i<lA; i++){
		for(j=0; j<cB; j++){
			C[i][j] = 0;
		}
	}

	for(i=0; i<lA; i++){
		for(j=0; j<cB; j++){
			for(k=0; k<cA; k++){
				C[i][j]+= A[i][k] * B[k][j];
			}
		}
	}
}
int main()
{
	int **mA, **mB, **mC, lA, lB, cA, cB;
	int i, j, k;

	printf("Informe o numero de linhas da primeira matriz: \n");
	scanf("%d", &lA);
	printf("Informe o numero de colunas da primeira matriz: \n");
	scanf("%d", &cA);

    mA = malloc(lA*sizeof(int*));
    for(i=0; i<lA; i++){
        mA[i]= malloc(cA*sizeof(int*));
    }

	printf("Informe os elementos da primeira matriz: \n");
	for(i=0; i<lA; i++){
		for(j=0; j<cA; j++){
			scanf("%d", &mA[i][j]);
		}
	}


    printf("Informe o numero de linhas da segunda matriz: \n");
	scanf("%d", &lB);
	printf("Informe o numero de colunas da segunda matriz: \n");
	scanf("%d", &cB);

	mB = malloc(lB*sizeof(int*));
    for(i=0; i<lB; i++){
        mB[i]= malloc(cB*sizeof(int*));
    }

	printf("Informe os elementos da primeira matriz: \n");
	for(i=0; i<lB; i++){
		for(j=0; j<cB; j++){
			scanf("%d", &mB[i][j]);
		}
	}

	mC = malloc(lA*sizeof(int*));
    for(i=0; i<lA; i++){
        mC[i]= malloc(cB*sizeof(int*));
    }

    multiplicacao(mA, mB, mC,  lA, cA, cB);

    printf("Primeira matriz: \n");
    for(i=0; i<lA; i++){
        for(j=0; j<cA; j++){
			printf("%d  ", mA[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	printf("Segunda matriz: \n");
    for(i=0; i<lB; i++){
        for(j=0; j<cB; j++){
			printf("%d  ", mB[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	printf("Resultado da multiplicacao entre a primeira e segunda matriz: \n");
	for(i=0; i<lA; i++){
        for(j=0; j<cB; j++){
			printf("%d  ", mC[i][j]);
		}
		printf("\n");
	}

	return 0;
}

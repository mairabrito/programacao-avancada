#include <stdio.h>

int main()
{
    char x1[4];
    int x2[4];
    float x3[4];
    double x4[4];

    // i) x for declarado como char:
    for (int i =0; i<4; i++){
        printf("%d \n", (x1+i)); // Bate com a suposiçoes da questao anterior
    }

    printf("\n");

    // ii) x for declarado como int:
    for (int i =0; i<4; i++){
        printf("%d \n", (x2+i)); // A unica diferença é que essa maquina a variavel do tipo int ocupa 4 bytes, na questao anterior ocupava 2 bytes
    }

     printf("\n");

    // iii) x for declarado como float:
    for (int i =0; i<4; i++){
        printf("%d \n", (x3+i)); // Bate com a suposiçoes da questao anterior
    }

    printf("\n");

    // iv) x for declarado como double:
    for (int i =0; i<4; i++){
        printf("%d \n", (x4+i)); // Bate com a suposiçoes da questao anterior
    }


    return 0;
}

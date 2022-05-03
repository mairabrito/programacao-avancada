#include <stdio.h>

int main(v)
{
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    valor = 10;
    p1 = &valor; // Recebe o endereço da variavel valor
    *p1 = 20; // o conteudo da variavel valor foi alterado para 20
    printf("%d \n", valor); // Imprimiu o valor esperando // 20.

      /* (b) */
    temp = 26.5;
    p2 = &temp; // p2  recebe o endereço da variavel temp
    *p2 = 29.0; // o conteudo da variavel temp foi alterado para 29.0
    printf("%.1f \n", temp); //Imprimiu o valor esperando // 29.0

      /* (c) */
    p3 = &nome[0]; // Recebe o endereço da string "Ponteiros" na posição 0
    aux = *p3; // recebe o coteudo de p3 = p
    printf("%c \n", aux); // Imprimiu a resposta esperada // P

    /* (d) */
    p3 = &nome[4];  // Recebe o endereço da string "Ponteiros" na posição 4
    aux = *p3; //recebe o coteudo de p3 = e
    printf("%c \n", *p3); // Imprimiu a resposta esperada // e

    /* (e) */
    p3 = nome; // Recebe o endereço da string "Ponteiros" na posição 0
    printf("%c \n", *p3); // Imprimiu a resposta esperada // P

    /* (f) */
    p3 = p3+4; // Recebe o endereço da string "Ponteiros" na posição 0+4
    printf("%c \n", *p3); // Imprimiu a resposta esperada // e

    /* (g) */
    p3--; // Recebe o endereço da string "Ponteiros" na posição (0+4)-1 = 3
    printf("%c \n", *p3); // Imprimiu a resposta esperada // t

     /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4= vetor; // Recebe o endereço do vetor na posição 0
    idade = *p4; //recebe o coteudo de p4 // 31
    printf("%d \n", idade); // Imprimiu a resposta esperada // 31

     /* (i) */
     p5 = p4 +1; // Recebe o endereço do vetor na posição 0+1
     idade = *p5; //recebe o coteudo de p5 // 45
     printf("%d \n", idade); // Imprimiu a resposta esperada // 45


     /* (j) */
     p4 = p5+1; // Recebe o endereço do vetor na posição 1+1
     idade = *p4; //recebe o coteudo de p4 // 27
     printf("%d \n", idade); // Imprimiu a resposta esperada // 27

     /* (l) */
     p4 = p4-2; // Recebe o endereço do vetor na posição 2-2
     idade = *p4; //recebe o coteudo de p4 // 31
     printf("%d \n", idade); // Imprimiu a resposta esperada // 31


     /* (m) */
     p5 = &vetor[2]-1; // Recebe o endereço do vetor na posição 2-1
     printf("%d \n", *p5); // Imprimiu a resposta esperada // 45

     /* (n) */
     p5++; // Recebe o endereço do vetor na posição 1+1
     printf("%d \n", *p5); // Imprimiu a resposta esperada // 27


    return 0;
}

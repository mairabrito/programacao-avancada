#include <stdio.h>

int main(void)
{
    int i=3, j=5;
    int *p, *q;

    p= &i;
    q= &j;

    p==&i; // O valor dessa expressão é 1(verdadeiro), pois o valor de p é igual a &i.

    *p-*q; // O valor dessa expressão é -2, pois os conteúdos de i e j são respectivamente 3 e 5. Logo, 3-5= -2.

    **&p;; // O  valor dessa expressão é 3,

    3- (*p)/(*q) +7; // O valor dessa expressao é 10, pois *p/*q = (int)3/5 = 0. Logo, 3-0+7=10.

    // CONFERINDO OS VALORES DAS EXPRESSÕES

    printf("%d \n", p==&i); // 1
    printf("%d \n", *p-*q); // -2
    printf("%d \n", **&p); // 3
    printf("%d \n", 3- (*p)/(*q) +7); // 10


    return 0;
}

#include <stdio.h>

int main(void)
{
    int i, j, *p, *q;
    p=i; // Atribuição ilegal.
    q = &j; // Atribuição legal.
    p = &*&i; // Atribuição legal.
//    i = (*&)j; //Atribuição ilegal, a expressão não funciona com os parentes
    i = *&j; //Atribuição legal.
    i = *&*&j; // Atribuição legal.
    q = *p; // Atribuição ilegal;
   //  i = (*p)++ + *q; //Atribuição ilegal;

    return 0;
}

#include <stdio.h>

int main()
{
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4); //Será em empresso o endereço de i = p; (O conteúdo de p) + 2 = (5+2) =7;  5; (3 vezes o conteúdo de p)=(3*5)=15; 5+4=9.

    // Supondo que i ocupa o endereço 4094 na memória. Logo, será empresso: 4094 7 5 15 9
    return 0;
}

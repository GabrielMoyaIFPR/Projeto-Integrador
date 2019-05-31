#include <stdio.h>

int main ()
{
    int idade, *p;

    idade = 18;
    p = &idade;

    *p = 22;
    
 
    
    printf("Olá mundo, a idade é %i\n", idade);    
    
    idade = 31;

    printf("Olá mundo, a idade é %i\n", *p);    

    printf("O endereço da variavel idade é%p\n", p);    

    return 0;
}

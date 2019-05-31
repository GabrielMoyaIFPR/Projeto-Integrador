#include <stdio.h>

void checar_idade_par_impar(int i)
{
    if(i & 0x01)
           printf(" eh impar");
    else   
           printf("eh par");
}

int main ()
{
    int idade, *p;

    idade = 18;
    p = &idade;

    *p = 22;
    
 
    
    printf("A idade é %i\n", idade); 
    checar_idade_par_impar(idade);
    
    idade = 31;

    printf("A idade é %i\n", *p);   
    checar_idade_par_impar(idade) ;

    printf("O endereço da variavel idade é%p\n", p);    

    return 0;
}

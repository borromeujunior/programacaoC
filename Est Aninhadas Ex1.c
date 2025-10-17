#include <stdio.h>

int main() {
    int idade;
    float renda;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digite sua renda: \n");
    scanf("%f", &renda);

    if(idade <= 18 || idade >= 60)
    {
    printf("Aceito com relação à idade! \n");
    } else {
    printf("Você não atende aos critérios devido sua idade! \n");    
    }
    if(renda < 2000)
    {
    printf("Você tem direito ao desconto! \n");    
    } else {
    printf("Você não tem direito ao desconto devido à sua renda! \n");    
    }


}
//Exiba para o usuário os múltiplos de um número inserido por ele até 100. 

#include <stdio.h> 

int main(){ 

    int numero, cem = 100, i = 1; 

    printf("Escreva um numero para ser o divisor\n"); 

    scanf("%i", &numero); 

    printf("Os numeros abaixo sao divisiveis por %i:\n", numero); 


    for(i; i <= 100; i++){ 

        if(i % numero == 0){ 

            printf("%i\n", i); 

        } 

    } 

} 

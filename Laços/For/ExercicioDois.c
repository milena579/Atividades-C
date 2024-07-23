//Faça um programa que some todos os números naturais até o valor inserido pelo usuário 

#include <stdio.h> 

int main(){ 

    int numero, soma = 0, c; 

    printf("Digite um numero\n"); 

    scanf("%i", &numero); 

    for(c = 1; c <= numero; c++){ 

        if( c > 0){ 

            soma = soma + c; 

        } 

    } 

    printf("A soma de todos os numeros ate %i eh de %i", numero, soma ); 

} 

//Faça um programa que exiba uma tabela com a tabuada de um valor inserido pelo usuário. 

#include <stdio.h> 

int main(){ 

    int numero, i = 1, multi = 0; 

    printf("Escreva um numero para formar uma tabuada:\n"); 

    scanf("%i", &numero); 

    for(i; i <= 10; i++){ 

        multi = i * numero; 

        printf("%i X %i = %i\n", numero, i, multi); 

    } 

} 

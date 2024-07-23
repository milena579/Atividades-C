//Faça um programa que leia três valores. Enquanto a soma desses três valores não resultarem em 45 o sistema repetirá seu processo. 

#include <stdio.h> 

int main(){ 

    float valor1, valor2, valor3, soma; 

    while(soma != 45){ 

        printf("Escreva o primeiro numero:\n"); 

        scanf("%f", &valor1 ); 

 
        printf("Escreva o segundo numero:\n"); 

        scanf("%f", &valor2 ); 

 
        printf("Escreva o terceiro numero:\n"); 

        scanf("%f", &valor3 ); 

 
        soma = valor1 + valor2 + valor3; 

 
        if(soma == 45){ 

            printf("O valor das somas atingiu 45!"); 

            break; 

        } else { 

            printf("Tente novamente!\n"); 

        } 

    } 

} 

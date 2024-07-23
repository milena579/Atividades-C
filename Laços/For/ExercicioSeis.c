//Faça um programa que faça um padrão de asteriscos, como um triângulo ou um retângulo até um valor máximo de 20. Se passar disso deve bloquear a Execução. 

#include <stdio.h>  


int main(){ 

    int resposta, i = 1, c; 


    printf("Escolha:\n1 - Triangulo\n2- Retangulo\n"); 

    scanf("%i", &resposta); 

 
    if(resposta ==  1 ){ 

        for(i; i <=20; i++){ 

            for(c = 1; c <= i; c++){ 

                printf("*"); 

           } 

           printf("\n"); 

        } 

    } 

    else{ 

        for(i; i <=20; i++){ 

           for(c = 1; c <= 20; c++){ 

                printf("*"); 

           } 

           printf("\n"); 

        } 

    } 

} 

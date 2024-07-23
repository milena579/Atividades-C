//Escreva um código onde será identificado os números primos até o valor inserido pelo usuário. 

#include <stdio.h> 

int main(){ 

    int numero, i = 1, primo, cont = 0; 

    printf("Escreva um numero:\n"); 

    scanf("%i", &numero); 

    printf("Os numeros abaixo sao primos:\n"); 

 

    for(i; i <= numero; i++ ) { 

        cont = 0; 

        for(int j = 1; j <= numero; j++){ 

            if( i % j == 0){ 

                cont++; 

            } 

        } 

        if(cont <= 2){ 

            printf("%i\n",i); 

        } 

    } 

} 

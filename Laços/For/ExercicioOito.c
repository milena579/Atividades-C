//Encontrar e exibir todos os números primos entre 1 e 100. 

#include <stdio.h> 

int main(){ 

    int numero = 100, i = 1, primo, cont = 0; 

 

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

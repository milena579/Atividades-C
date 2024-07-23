//Faça um programa para adivinhar um número entre 1 e 1000. Este valor pode  ser definido automaticamente, ou randomizado utilizando uma função rand. 

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main(){ 

    srand(time(NULL)); 

    int num  = rand() % 1000; 

    int resposta; 

    int tentativa = 0; 

    while(resposta != num){ 

        //printf("%i", num); 

        printf("Escreva um numero de 1 a 1000:\n"); 

        scanf("%i", &resposta); 


        if(resposta != num){ 

            printf("Voce errou!\n"); 
        } 

        else{ 

            printf("Voce acertou!\n"); 

            printf("O numero de tentativas foi de: %d", tentativa); 

            break; 

        } 

        tentativa = tentativa + 1; 

    } 

} 

 

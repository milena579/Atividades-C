//Calcular a média de N valores inseridos pelo usuário. 

#include <stdio.h> 

int main(){ 

    float nota = 0, media = 0, soma = 0; 

    int i, qtd; 

    printf("Digite a quantidade de notas:\n"); 

    scanf("%i", &qtd); 

    for(i = 1; i <= qtd; i++){ 

        printf("Digite a nota %i \n", i); 

        scanf("%f", &nota); 

        soma = soma + nota; 

    } 

    media = soma / qtd; 


    printf("A media das notas eh de: %.2f", media); 


} 

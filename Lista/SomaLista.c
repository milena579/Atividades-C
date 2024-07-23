//Faça a soma de todos os valores de um array. 

#include <stdio.h> 
int main(){ 

    int lista[4] = {5, 2, 8, 4}; 

    int soma = 0; 

    for(int i = 0; i < 4; i++){ 

        printf("%i, ", lista[i]); 

        soma = soma + lista[i]; 
    } 
  
    printf("\nA soma dos valores apresentados eh de: %i", soma); 

} 

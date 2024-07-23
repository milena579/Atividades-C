Identifique o maior valor dentro de uma sequência de valores armazenadas em um array. 

#include <stdio.h> 

#include <stdlib.h> 

int main(){ 

    int lista[4] = {5, 2, 8, 4}; 

    int maior = 0; 

    for(int i = 0; i < sizeof(lista)/4; i++){ 

        if(lista[i] > maior){ 

            maior = lista[i]; 

        } 

    } 

    printf("\nO maior numero eh o: %i", maior); 

} 

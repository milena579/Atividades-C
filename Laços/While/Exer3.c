//Faça um programa que exiba uma barra de carregamento para processar uma compra de um determinado produto. 

#include <stdio.h> 

int main(){ 

    int carregamento = 1; 

    printf("Carregando sua compra!\n"); 

    while(carregamento<=10) 
    {    
        printf("[]"); 

        sleep(1); 

        carregamento += 1;  

    } 

    printf("\nCompra realizada com sucesso!"); 

} 

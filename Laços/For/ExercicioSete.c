//Contar quantos dígitos tem um número inteiro positivo. 

#include <stdio.h> 

int main(){ 

    long long int numero; 

    int i = 0; 

 

    printf("Digite um numero:\n"); 

    scanf("%lli", &numero); 

 

    for(i = 1; numero /=10; i++){ 

    } 

    printf("O numero didigitado possui %i digitos", i); 

} 

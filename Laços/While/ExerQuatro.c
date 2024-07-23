//Faça um programa que bloqueie a entrada de números e apenas permita a passagem se a senha for igual a do sistema. 

#include <stdio.h> 
#include <string.h> 

int main(){ 
    char senhaSistema[] = "Senai2024"; 

    char senha[10];  
 
    printf("Digite a senha: \n"); 

    scanf("%s",senha); 

    while (strcmp(senha, senhaSistema) != 0 ) 

    { 

        printf("Senha incorreta!\n"); 

        printf("Tente novamente:\n"); 

        scanf("%s", senha); 

    } 

    printf("Senha correta!"); 

} 

//Faça um programa que leia informações de um usuário(Nome e sobrenome, Data de nascimento, CPF,) e exiba esses dados em uma espécie de certificado de conclusão do curso TDS; 

#include <stdio.h>; 

int main() { 

    char nome[50]; 

    char data[15]; 

    char cpf[15]; 

    printf("Digite seu NOME e SOBRENOME:"); 

    scanf("%s", nome); 

 

    printf("Digite a data de conclusao: "); 

    scanf("%s", data); 

 

    printf("Digite seu CPF (sem tracos ou pontos): "); 

    scanf("%s", cpf); 

    printf("--------------------------------------------CERFITICADO DE CONCLUSAO--------------------------------------------"); 

    printf("\n********************************************GOSTARIAMOS DE INFORMAR QUE*****************************************"); 

    printf("\n---------------------------------- A(O) ALUNA(O): %s ----------------------------------------------------------", nome); 

    printf("\n----------------------------------PERTENCENTE AO CPF: %s ----------------------------------------------------", cpf); 

    printf("\n------------------------CONCLUIU O CURSO DE ANALISE DEV DE SISTEMAS NA DATA: %s ---------------------------------", data); 

 

    return 0; 

} 

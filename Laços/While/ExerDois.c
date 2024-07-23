//O chefe da empresa onde você trabalha, lhe deu uma atividade: desenvolver um programa que faça a verificação de valores bancários e permita o saque ou o depósito.
//O saque só pode ser feito se o valor total da conta for maior que 60 Reais.  

#include <stdio.h>  

int main(){  

    int conta = 0;  
    int saque;  
    int deposito;  
    int op; 
    int resposta; 

  
    while (conta<60) 

    {     

        printf("Digite um valor para depositar: \n"); 

        scanf("%i", &deposito); 

        conta = conta + deposito; 

    }  

    while (conta>=60) 

    { 

        START: 

        printf("Agora voce pode sacar alem de depositar!\n"); 

        printf("Digite 1 - Saque\nDigite 2 - Deposito\nDigite 3 - Sair\n"); 

        scanf("%i", &op); 

 

        switch (op){ 

        case 1 : 

            printf("Digite um valor para sacar: \n"); 

            scanf("%i", &saque); 

 

            if (saque > conta){ 

                printf("Saldo indisponivel!"); 

                printf("\nSeu saldo eh de: %i escolha outra opcao\n", conta); 

            } else { 

                conta = conta - saque; 

                printf("Saque concluido com sucesso!\n"); 

                goto START; 

            } 

            break; 

             

        case 2: 

            printf("Digite um valor para depositar: \n"); 

            scanf("%i", &deposito); 

            conta = conta + deposito; 

            printf("Deposito concluido com sucesso!\n"); 

 

            break; 

        case 3: 

            printf("Voce deseja realmente sair?\n1 - Sim\n2 - Nao\n"); 

            scanf("%i", &resposta); 

 

            if(resposta == 1){ 

                printf("Obrigado pela preferencia. Ate logo!"); 

                break; 

            } else{ 

                goto START; 

            }  

        } 

    } 

 

} 

 

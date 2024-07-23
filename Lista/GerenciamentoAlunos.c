//Faça um programa para uma escola chamada IANES que fará todo o gerenciamento de alunos, cursos, e média de alunos. Utilize um arquivo de texto para fazer esse gerenciamento.(Escrita e leitura) 

#include <stdio.h> 

#include <stdlib.h> 

int main(){ 

    FILE * notasAlunos = fopen("notasAlunos.txt", "w"); 

    int qtdAlunos = 3; 

    char alunos[3][50]; 

    int Provas[3][3]; 

    for(int i = 0; i < 3; i++){ 

        printf("\nEscreva o nome do aluno: "); 

        scanf(" %s",alunos[i]); 

        for (int j = 0;j<3;j++){ 

            printf("Digite a nota da %i prova ",j+1); 

            scanf("%i",&Provas[i][j]); 

        } 

    } 

    for (int i=0;i<3;i++){ 

        printf("\n nome: %s  nota 1: %i  nota 2: %i  nota 3: %i" ,alunos[i],Provas[i][0],Provas[i][1],Provas[i][2]); 

    } 

} 

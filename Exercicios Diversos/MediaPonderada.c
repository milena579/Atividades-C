// Calcule a média ponderada onde cada trimestre tem um peso diferente (2,3,5). Insira as notas diretamente no código para resolução 


#include<stdio.h> 

int main(){ 

    float notaUm = 4; 

    float notaDois = 8; 

    float notaTres = 9; 

 
    float pesoNotaUm = 2; 

    float pesoNotaDois = 3; 

    float pesoNotaTres = 5; 

    float pesoTotal = pesoNotaUm + pesoNotaDois + pesoNotaTres; 

    float media = ((notaUm * pesoNotaUm) + (notaDois * pesoNotaDois) + 		(notaTres * pesoNotaTres)) / (pesoTotal); 

    printf("%f", media); 

} 

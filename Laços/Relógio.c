#include <stdio.h>  

#include <time.h>  


int main(){  

    int op; 

    printf("1- Hora atual\n2- Cronometro\n3-Temporizador\n"); 

    scanf("%i", &op); 

 

    switch (op) 

    { 

    case 1 : 

        horaAtual(); 

        break; 

    case 2: 

        cronometro(); 

        break; 

    case 3: 

        temporizador(); 

        break; 

    } 


}  


int horaAtual(){  

    time_t hora;  
 

    time(&hora);  
 

    struct tm *tempo0 = localtime(&hora);  

 
  printf("Horario atual: %02d:%02d:%02d\n",tempo0->tm_hour, tempo0->tm_min, tempo0->tm_sec);  


}  
 
int cronometro(){ 

    while (1){ 

        int seg = 1, min, hora; 

        while(seg >= 1){ 

            system("CLS"); 

            printf("%i:%i:%i", hora = 0, min = 0, seg); 

            sleep(1); 

 

            seg = seg + 1; 
 

            if(seg == 60){ 

                seg = 0; 

                min++; 

            } 
 

            if(min == 60){ 

                min = 0; 

                hora++; 

            } 

        } 

 
    } 
     
} 

int temporizador(){ 

    int seg, min = 0, hora = 0; 

    printf("Digite o numero de horas:\n"); 

    scanf("%i", &hora); 


    printf("Digite o numero de minutos:\n"); 

    scanf("%i", &min); 


    printf("Digite o numero de segundo:\n"); 

    scanf("%i", &seg); 

 
    while(1){ 

        system("CLS"); 

        printf("%i:%i:%i", hora, min, seg); 

        sleep(1); 

        seg--; 


        if(seg == 0){ 

            min--; 

            seg = 59; 

        } 

 

        if(hora >=1 && min == 0 && seg == 0){ 

            min = 59; 

            hora--; 

        } 


        if(seg < 0 && min <0 && hora < 0){ 

            break; 

        } 

    } 


} 

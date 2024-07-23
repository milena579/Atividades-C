//Faça uma conversão de celsius para fahrenheit, exiba essa conversão, e logo após exiba a conversão do resultado anterior para kelvin 

#include<stdio.h> 

int main(){ 

    float tempCelsius = 30; 

    float tempFaren = (tempCelsius * 1.8) + 32; 

    float tempKelvin = ((tempFaren - 32) / 1.8) + 273.15; 

    printf("A temperatura de %.2fC em F: %.2f", tempCelsius, tempFaren ); 

    printf(" \nA temperatura de %.2fF em K: %.2f", tempFaren, tempKelvin); 

} 

 

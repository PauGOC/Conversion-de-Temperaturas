#include<stdio.h>
#include <locale.h>

int main(){
	float celsius=30;
	float fahrenheit=5;
	setlocale(LC_ALL,"");
	system("cls");
	printf("\033[1;31m" "Conversión de temperaturas \n\n");
	printf("\033[1;34m" "Temperatura en Fahrenheit:"); 
	printf("\033[0;37m %f °F \n", fahrenheit); //ANTES 
	
	fahrenheit=((fahrenheit-32)*5/9);
	printf("\033[0;36mConversión de temperatura a Celcius:");
	printf("\033[1;37m%f °C\n", fahrenheit);//Conversión a °C (1)
	
	printf("\n");
	printf("-------------------------------------------------------\n\n");
	
	printf("\033[1;33mTemperatura en Celcius:");
	printf("\033[1;37m%f °C\n", celsius); //ANTES 
	
	celsius=((celsius*9/5)+32);
	printf("\033[0;33mConversión de temperatura a Fahrenheit:");
	printf("\033[1;37m %f °F \n", celsius);//Conversión a °F
	return 0;
}

#include<stdio.h>
#include <locale.h>

int main(){
	int celsius=30;
	int fahrenheit=5;
	setlocale(LC_ALL,"");
	system("cls");
	printf("\033[1;31m" "Conversi�n de temperaturas \n\n");
	printf("\033[1;34m" "Temperatura en Fahrenheit:"); 
	printf("\033[0;37m %d �F \n", fahrenheit); //ANTES 
	
	fahrenheit=((fahrenheit-32)*5/9);
	printf("\033[0;36mConversi�n de temperatura a Celcius:");
	printf("\033[1;37m%d �C\n", fahrenheit);//Conversi�n a �C (1)
	
	printf("\n");
	printf("-------------------------------------------------------\n\n");
	
	printf("\033[1;33mTemperatura en Celcius:");
	printf("\033[1;37m%d �C\n", celsius); //ANTES 
	
	celsius=((celsius*9/5)+32);
	printf("\033[0;33mConversi�n de temperatura a Fahrenheit:");
	printf("\033[1;37m %d �F \n", celsius);//Conversi�n a �F
	return 0;
}

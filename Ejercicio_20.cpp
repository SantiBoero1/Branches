#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
	int a=0,rta;
	char s[100],palabra[100],palabra2[100];
	
	printf("ingrese una palabra: ") ;
	scanf("%s",s);
	
	a = strlen(s);
	
	if (a==0)
	printf("La cadena dada es vacia \n");
	
	else
	printf("La cadena posee %d caracteres \n", a) ;
	
	printf("quiere concatenar 2 cadenas? ingrese 1 para si y 2 para no \n");
	scanf("%d",&rta);
	
	if (rta==1){
		printf("Ingrese palabra 1: ");
		scanf("%s", palabra);
		
		printf("Ingrese palabra 2: ");
		scanf("%s", palabra2);
		
		printf("La concatenacion es: %s ", strcat(palabra,palabra2));
	}
	
	
	return 0;
}

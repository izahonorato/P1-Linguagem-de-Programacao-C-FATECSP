#include <stdio.h>
#define area(b,a) a*b
#define cparaf(c) ((c*9.0/5.0)+32)

int main(){
	printf("\nCalculo da Area de um Retangulo\n Base = 4 \n Altura = 2 \n Area = %d", area(4,2));
	
	printf("\nConversao de Celsius para Fahrenheit\n F = %.2f", cparaf(27));
	
	return 0;
	
}

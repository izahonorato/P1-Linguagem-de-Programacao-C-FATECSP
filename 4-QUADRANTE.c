#include <stdio.h>

void quadrante(float x, float y){
	if(x == 0 && y == 0){
		printf("\nOrigem");
	}
	if(x != 0 && y == 0){
		printf("\nEixo X");
	}
	if(y != 0 && x == 0){
		printf("\nEixo Y");
	}
	if(x > 0) {
		if(y > 0){
			printf("\nQuadrante 1");
		}
		else
			if(y < 0){
				printf("\nQuadrante 4");
			}
	}
	else
		if(x < 0){
			if(y > 0){
				printf("\nQuadrante 2");
			}
			else
				if(y < 0){
					printf("\nQuadrante 3");
				}
		}
}

int main(){
	float x, y;
	
	printf("\nDigite as coordenadas X e Y:\n");
	scanf("%f %f", &x, &y);
	
	quadrante(x,y);
	
	return 0;
}

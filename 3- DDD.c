#include <stdio.h>
void discagem(int DDD){
	
	switch (DDD){
		case 11: puts("\n Sao Paulo");break;
		case 21: puts("\n Rio de Janeiro");break;
		case 31: puts("\n Belo Horizonte");break;
		case 61: puts("\n Brasilia");break;
		case 71: puts("\n Salvador");break;
		case 32: puts("\n Juiz de Fora");break;
		case 27: puts("\n Vitoria");break;
		case 19: puts("\n Campinas");break;
		default: puts("\n DDD nao cadastrado");
	}
}

int main(){
	
	int DDD;
	puts("Digite o DDD: ");
	scanf ("%d", &DDD);
	discagem(DDD);
	return 0;
}



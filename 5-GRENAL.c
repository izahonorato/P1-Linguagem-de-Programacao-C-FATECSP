#include <stdio.h>

int main(){
	
	int i, g, resp, vi=0, vg=0, e=0, n=0;

	do{
		printf("\nDigite o numero de gols marcados Inter X Gremio:\n");
		scanf("%d %d", &i, &g);

		printf("Novo grenal (1-sim 2-nao)");
		scanf("%d", &resp);
		
		if (i > g){
			vi+= 1;  
		}
		if(g > i){
			vg+= 1;
		}
		if(i == g){
			e+= 1;
		}
		n++;
	}while (resp == 1);

	printf("\nQuantidade de GRENAIS: %d", n);
	printf("\nQuantidade de vitorias do INTER: %d", vi);
	printf("\nQuantidade de vitorias do GREMIO: %d", vg);
	printf("\nQuantidade de EMPATES: %d", e);
	
	if(vi > vg){
		return printf("\nVenceu o maior numero de GRENAIS: %d", vi);
	}
	if(vg > vi){
		return printf("\nVenceu o maior numero de GRENAIS: %d", vg);
	}
	if(vi == vg){
		return printf("\nNao houve vencedor dos GRENAIS");
	}
	
	
	return 0;
	
}

#include <stdio.h>

int divisao(int a, int b){
	if(a < b){
		return 0;
	}
	return 1 + divisao((a-b),b);
}

int main(){
	printf("\n %d", divisao(16,3));
	
	return 0;
}

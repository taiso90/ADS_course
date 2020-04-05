#include <cstdio>

int main(){
	int num;
	printf("\nEntre com um numero inteiro");
	
	scanf("%d",&num);
	
	if(num >0)
	printf("Numero e positivo");
	else
	if(num < 0)
	printf("numero negativo");
	
	else
	printf("Numero igual a zero");
}

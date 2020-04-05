#include <cstdio>

int main(){
	
	int num;
	
	printf("\nEntre com um nmero inteiro");
	scanf("%d", &num);
	
	if(num >= 0){
		if(num%2 == 0)
			printf("O numero e par");
		else
		printf("O numero e impar");
		
	}
}

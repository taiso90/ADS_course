#include <cstdio>
int main(){
	float nota1, nota2, nota3, nota4;
	float media;
	
	scanf("%f", &nota1);
	scanf("%f", &nota2);
	scanf("%f", &nota3);
	scanf("%f", &nota4);
	
	media = (nota1+nota2+nota3+nota4) / 4;
	printf("\nA media e =%f ", media);//nao esqueccer do %f senao nao lera variavel
}

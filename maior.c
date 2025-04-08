#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2,i, contadorpar = 0;
	
	printf("Digite o primeiro número: ");
	scanf("%d",&n1);
	printf("Digite o segundo número: ");
	scanf("%d",&n2);
	
	if(n1 > n2){
		i=n1;
		n1=n2;
		n2=i;
	}
	
	for(n1; n1 <= n2; n1++){
			if(n1 % 2 == 0){
			printf("\n%d é par!",n1);
			contadorpar++;}
			else{printf("\n%d é impar!",n1);}
	}
	
	printf("\nO número de pares é %d \n", contadorpar);
	
	
	 system(" pause");
	return 0;
}
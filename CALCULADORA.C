#include<stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

float n1, n2;
char operador, cont;

printf("Bem vindo a calculadora!\n");
printf("\nSoma  = + \nSubtração = - \nmultiplicacao = * \ndivisão = / \n");
printf("\nDigite a operação: ");
scanf("%f %c %f", &n1, &operador,&n2);

if(operador == '+'){
printf("%2.f %c %2.f = %2.f\n",n1,operador,n2,n1+n2);
}
if(operador =='-'){
printf("%2.f %c %2.f = %2.f",n1,operador,n2,n1-n2);
}
if(operador =='*'){
printf("%2.f %c %2.f = %2.f",n1,operador,n2,n1*n2);
}
if(operador=='/'){
printf("%2.f %c %2.f = %f",n1,operador,n2,n1/n2);
}
if(n2 == 0){
printf("Op não permitida, não é possivel dividir por 0");
}


return 0;}
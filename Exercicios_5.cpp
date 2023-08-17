#include <iostream>
//EXERCICIO UM
/*
int main(){
	int i = 100;
	while (i >= 100 && i <= 200){
		printf("%d\n", i);
		i++;
	}
}
*/
/*
//EXERCICIO DOIS
int main(){
	int i = 100;
	int ct = 0;
	while (i >= 100 && i <= 200){
		i++;
		if (i % 2 == 0){
			ct++;
		}
	}
	printf("A quantidade de numeros pares entre 100 e 200 eh: %d", ct);
}
*/
/*
//EXERICIO TRES
int main(){
	int i = 99;
	int ct = 0;
	int soma;
	while (i >= 99 && i <= 200){
		i++;
		if (i % 2 == 0){
			ct++;
			soma = soma + i;
		}
	}
	printf("A quantidade de numeros pares entre 100 e 200 eh: %d\n", ct);
	printf("A soma dos numeros pares entre 100 e 200 eh: %d", soma);
}
*/
/*
//EXERICIO QUATRO
int main(){
	int num1, i, mult;
	int soma = 0;
	int ct = 0;
	int soma_aux = 0;
	printf("Insira um numero entre [10 e 20]: ");
	scanf("%d", &num1);
	if (num1 < 10 or num1 > 20){
		printf("Valores fora do range pedido!");
	}
	while (i < 10){
		i++;
		mult = i * num1;
		printf("%d x %d = %d\n", num1, i, mult);
		soma_aux = soma + mult;
		if(soma < 100 and soma_aux < 100){   // fiz com cem pq com 10 ia parar na primeira soma
			ct++;
			soma = soma + mult;
		}
	}
	printf("A soma de %d numeros eh: %d", ct, soma);
}
*/


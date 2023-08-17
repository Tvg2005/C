#include <iostream>
#include <math.h>

int main(){
	float metros, centimetros, milimetros, decimetros;
	
	printf("Digite um valor em metros: ");
	scanf("%f", &metros);
	
	centimetros = metros * 100;
	decimetros = metros * 10;
	milimetros = metros * 1000;
	
	printf("O valor em metros inserido foi : %.2f\n", metros);
	printf("O valor em centimetros do valor %.2f em metros é : %.2f\n", metros, centimetros);
	printf("O valor em decimetros do valor %.2f em metros é: %.2f\n", metros, decimetros);
	printf("O valor em milimetros do valor %.2f em metros é : %.2f", metros, milimetros);
}


int main(){
	int i;
	int num1;
	int mt;
	printf("Insira um numero [1-10]:\n");
	scanf("%d", &num1);
	for (i = 1; i >= 1 && i <= 10; i++){
	mt = num1 * i;
	printf("O resultado da multiplicacao de  %d por %d é: %d\n", num1, i, mt);
}
	return 0;
}

int main(){
	int num1 = 0;
	printf("Insira um valor em Decimal para ser convertido:\n");
	scanf("\n%d", &num1);
	printf("O valor em Hexadecimal: %x\n", num1);
	printf("O valor em Octadecimal: %o", num1);
}

int main(){
	double num1, conta, div, conta1;
	printf("Insira um valor em Fahrenheit:\n");
	scanf("%lf", &num1);
	conta = num1 - 32.0;
	div = 5.0/9.0;
	conta1 = conta * div;
	printf("O valor %lf em Fahrenheit para graus celsius: %lf", num1, conta1);
	
}

int main(){
	int num1;
	float conta, div, conta1;
	printf("Insira um valor em Fahrenheit:\n");
	scanf("%d", &num1);
	conta = num1 - 32.0;
	div = 5.0/9.0;
	conta1 = conta * div;
	printf("O valor %d em Fahrenheit para graus celsius: %.2f", num1, conta1);
	}
*/



int main(){
	float num1, num2, soma, mt, qd, raiz, seno, qd2, dif, modulo;
	printf("Insira dois numeros:\n");
	scanf("%f %f", &num1, &num2);
	soma = num1 + num2
	printf("A soma do numero %.2f e %.2f: %.2f\n", num1, num2, soma);
	mt = num1 * num2 * num2;
	printf("O produto do numero %.2f pelo quadrado do segundo %.2f: %.2f\n", num1, num2, mt);
	qd = num1 * num1;
	qd2 = num2 * num2;
	printf("O quadrado do numero %.2f: %.2f\n", num1, qd);
	raiz = sqrt(qd + qd2);
	printf("A raiz da soma dos numeros %.2f e %.2f: %.2f\n", num1, num2, raiz);
	dif = num1 - num2;
	seno = sin(dif);
	printf("O seno da diferenca do primeiro numero %.2f pelo segundo %.2f: %.2f\n", num1, num2, seno);
	if (num1 < 0){
	modulo = num1 * -1;
	printf("O modulo do primeiro numero %.2f: %.2f", num1, modulo);
}	else{
	modulo = num1;
	printf("O modulo do primeiro numero %.2f: %.2f", num1, modulo);
}
	
	return 0;
}


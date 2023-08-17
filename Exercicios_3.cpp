#include <stdio.h>

int main()
{
    int segundos;
    int horas;
    int minutos;
    printf("Insira a duracao do seu evento em segundos: ");
    scanf("%d", &segundos);
    minutos = segundos * 60;
    horas = minutos * 60;
    printf("\nO seu evento tem duracao de %d segundos", segundos);
    printf("\nO seu evento tem duracao de %d minutos", minutos);
    printf("\nO seu evento tem duracao de %d horas", horas);

    
    return 0;
}

int main(){
	int num1, num2, num3;
	float media;
	printf("Insira tres numeros: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	media = (num1 + num2 + num3)/ 3.0;
	printf("%f:.2f", media);
	return 0;
}

int main(){
	int num1;
	printf("Insira um numero inteiro: ");
	scanf("%d", &num1);
	if (num1 % 2 == 0){
		printf("O numero eh par");
	}
	else{
		printf("O numero eh impar");
	}
}

int main(){
    int x, y, z;
    
    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    printf("Digite o valor de Z: ");
    scanf("%d", &z);
    
if (x + y > z && x + z > y && y + z > x) {    

    	if (x == y && x == z){
    		printf("Os valores formam um triangulo equilatero.\n");
	}
		else if (x > y && x == z){
			printf("Os valorem formam um triangulo isosceles.\n");
	}
		else if (x == y && x > z){
			printf("Os valorem formam um triangulo isosceles.\n");
	}
		else if (y == z && y > z){
			printf("Os valorem formam um triangulo isosceles.\n");
	}
		else{
			printf("Os valorem formam um triangulo escaleno.\n");
	}
}	
	else{
		printf("Os valores nao formam um triangulo.\n");
	}
}

int main(){
	float num1, num2, num3;
	printf("Informe 3 numeros: ");
	scanf("%f %f %f", &num1, &num2 , &num3);
	if (num1 > num2 && num1 > num3){
		if(num2 > num3){
			printf("%f eh maior que %f que eh maior que %f", num1, num2, num3);
		}
		else if (num3 > num2){
			printf("%f eh maior que %f que eh maior que %f", num1, num3, num2);
		}
		else{
			printf("%f eh o maior e os outros numeros sao iguais", num1);
		}
	}
	else if (num2 > num1 && num2 > num3){
		if(num1 > num3){
			printf("%f eh maior que %f que eh maior que %f", num2, num1, num3);
		}
		else if (num3 > num1){
			printf("%f eh maior que %f que eh maior que %f", num2, num3, num1);
		}
		else{
			printf("%f eh o maior e os outros numeros sao iguais", num2);
		}
	}
	else if (num3 > num1 && num3 > num2){
		if(num1 > num2){
			printf("%f eh maior que %f que eh maior que %f", num3, num1, num2);
		}
		else if (num2 > num1){
			printf("%f eh maior que %f que eh maior que %f", num3, num2, num1);
		}
		else{
			printf("%f eh o maior e os outros numeros sao iguais", num3);
		}
	}
	else{
		printf("Todos sao iguais");
	}
}

int main(){
	int num1, num2, conta;
	char sinal;
	printf("Insira dois numeros: ");
	scanf("%d %d", &num1, &num2);
	printf("Insira um sinal [+ - * /]\n");
	scanf(" %c", &sinal);
	switch(sinal){
		case '+':
            conta = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, conta);
            break;

        case '-':
            conta = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, conta);
            break;

        case '*':
            conta = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, conta);
            break;

        case '/':
            if (num2 == 0) {
                printf("Erro: divisao por zero\n");
            } else {
                conta = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, conta);
            }
            break;

        default:
            printf("Operacao invalida\n");
            break;
}	
}

int main(){
	int num1, num2, media, exame, media_exame;
	printf("Insira as duas notas do aluno [0 - 100]: ");
	scanf("%d %d", &num1, &num2);
	media = (num1 + num2) / 2;
	if (media >= 70){
		printf("Aluno aprovado!");
	}
	else if (media >= 40 && media <= 69){
		printf("Exame final!\n");
		printf("Insira a nota do exame final: ");
		scanf("%d", &exame);
		media_exame = (media + exame);
		if (media_exame >= 100){
			printf("Aluno aprovado pelo exame final!");
		}
		else{
			printf("Aluno reprovado!");
		}
		
	}
	else if (media < 40){
		printf("Aluno reprovado!");
	}
	
	
}

int main() {
    char *numerosescritos[] = {"zero", "um", "dois", "três", "quatro", "cinco",
                                   "seis", "sete", "oito", "nove", "dez", "onze",
                                   "doze", "treze", "quatorze", "quinze", "dezesseis",
                                   "dezessete", "dezoito", "dezenove"};
    char *dezenaescrita[] = {"", "", "vinte", "trinta", "quarenta", "cinquenta",
                                   "sessenta", "setenta", "oitenta", "noventa"};
    int num, deze, uni;
    
    printf("Insira um numero de [0-99]: ");
    scanf("%d", &num);
    
    if (num < 0 || num > 99) {
        printf("Número inválido.\n");
    } else if (num < 20) {
        printf("%s\n", numerosescritos[num]);
    } else {
        deze = num / 10;
        uni = num % 10;
        if (uni == 0) {
            printf("%s\n", dezenaescrita[deze]);
        } else {
            printf("%s e %s\n", dezenaescrita[deze], numerosescritos[uni]);
        }
    }

    return 0;
}

    
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

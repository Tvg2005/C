#include <iostream>

int main(){
	int i =0;
	int sair = 0;
	int conta = 0;
	int media = 0;
	int idade = 0;
	printf("Insira [0] para sair");
	for (sair = 0; sair >= 0 && sair <= 1000; sair++){
		printf("\nInsira uma idade: ");
		scanf("%d", &idade);
		i++;
		conta = idade + conta;
		if (idade == 0){
			i = i - 1;
			sair = 1001;
		}
	}
	media = conta / i;
	printf("A media das idades foi %d", media);	
}


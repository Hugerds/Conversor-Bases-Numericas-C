#include <stdio.h>
#include <locale.h>
#include <string.h>


long long int decimalBinario(long long int num) {
	system("cls");
	int a, ehDivisivel=0, deuZero=0, b;
	long long int salvaNum=num, aux, numGerado;
	int numNovo[50];
	for(a=0;a<1000 || deuZero==1;a++) {
		if (num%2==0) {
			numNovo[a]=0;
		}
		else if(num%2==1) {
			numNovo[a]=1;
		}
		if(num==1) {
			deuZero==1;
			aux = a;
			break;
		}
		num/=2;
	}
	printf("%lld(10) = ", salvaNum);
	for(a=aux;a>=0;a--) {
		numGerado = numNovo[a];
		printf("numNovo[a] = %lld\n", numNovo[a]);
	}
	return numGerado;
	//printf("(2)");
}



void menu() {
	int op;
	long long int num;
	printf("Conversor de bases num�ricas\n\n");
	do {
		printf("Insira o n�mero que voc� deseja converter e em seguida a op��o desejada (MAX 999999999999999)\nSeu n�mero: ");
		scanf("%lld", &num);
	} while (num<0 || num>999999999999999);
	system("cls");
	printf("Seu n�mero escolhido foi o %lld\n\n", num);
	printf("Voc� deseja calcular:\n1-N�mero octal para todas as bases\n2-N�mero bin�rio para todas as bases\n3-N�mero decimal para todas as bases\n4-N�mero hexadecimal para todas as bases\nSua op��o: ");
	do {
		fflush(stdin);
		scanf("%d", &op);
		fflush(stdout);
	} while(op<0 || op>4);
	if (op==1) {
		
	}
	else if (op==2) {
		
	}
	else if (op==3) {
		printf("%lld", decimalBinario(num));
	}
	else {
		
	}
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	menu();
}

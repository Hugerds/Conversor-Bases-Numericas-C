#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

void decimalOctal(long long int num) {
	system("cls");
	int a, ehDivisivel=0, deuZero=0, b;
	long long int salvaNum=num, aux, novoNum, numDiv;
	int numNovo[50];
	for(a=0;a<1000 || deuZero==1;a++) {
		numDiv = num%8;
		numNovo[a] = numDiv;
		printf("%d ", num);
		if(num==1) {
			numNovo[a]==1;
			deuZero==1;
			aux = a;
			break;
		}
		else if(num==0) {
			numNovo[a]==0;
			deuZero==1;
			aux=a;
			break;
		}
		num%=8;
	}
	printf("\n");
	//printf("%lld(10) = ", salvaNum);
	for(a=aux;a>=0;a--) {
		printf("%d ", numNovo[a]);
	}
	//printf("(8)");
}

void decimalBinario(long long int num) {
	system("cls");
	int a, ehDivisivel=0, deuZero=0, b;
	long long int salvaNum=num, aux;
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
		printf("%d", numNovo[a]);
	}
	printf("(2)");
}

void binarioDecimal(long long int num) {
	system("cls");
	int numNovo[200], potencia2[200], numOrdenado[200], potencia2ordenado[200], vetMult[200];
	long int numFinal, numSalvo=num;
	int a, b, c;
	for(a=0;num>0;a++) {
		numNovo[a] = num%10;
		num/=10;
		b=a;
	}
	for(a=0;a<=b;a++) {
		potencia2[a] = pow(2, a);
	}
	for(a=b, c=0;a>=0;a--, c++) {
		numOrdenado[c]=numNovo[a];
	}
	for(a=b, c=0;a>=0;a--, c++) {
		potencia2ordenado[c]=potencia2[a];
	}
	for(a=0;a<=b;a++) {
		vetMult[a] = potencia2ordenado[a]*numOrdenado[a];
	}
	for(a=0;a<=b;a++) {
		numFinal+=vetMult[a];
	}
	printf("%ld(10) = %ld(2)",numSalvo, numFinal);
}

int confereZeros(long long num) {
	int numNovo[200];
	int a, b, res;
	for(a=0;num>0;a++) {
		numNovo[a] = num%10;
		num/=10;
		b=a;
	}
	for(a=b;a>=0;a--) {
		if(numNovo[a] < 0 || numNovo[a] > 1) {
			res=0;
		}
		else if (numNovo[a]==0 || numNovo[a]==1){
			res=1;
		}
	}
	return res;
}

void menu() {
	int op;
	long long int num;
	system("cls");
	printf("Conversor de bases numéricas\n\n");
	do {
		printf("Insira o número que você deseja converter e em seguida a opção desejada (MAX 999999999999999)\nSeu número: ");
		scanf("%lld", &num);
	} while (num<0 || num>999999999999999);
	system("cls");
	printf("Seu número escolhido foi o %lld\n\n", num);
	printf("Você deseja calcular:\n1-Número octal para todas as bases\n2-Número binário para todas as bases\n3-Número decimal para todas as bases\n4-Número hexadecimal para todas as bases\nSua opção: ");
	do {
		fflush(stdin);
		scanf("%d", &op);
		fflush(stdout);
	} while(op<0 || op>4);
	if (op==1) {
		decimalOctal(num);
	}
	else if (op==2) {
		int res = confereZeros(num);
		if(res==0) {
			system("cls");
			printf("\nVocê inseriu um número binário inválido, voltando ao menu principal...\n");
			system("pause");
			menu();
		}
		else if(res==1){
			binarioDecimal(num);
		}
	}
	else if (op==3) {
		decimalBinario(num);
	}
	else {
		
	}
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	menu();
}

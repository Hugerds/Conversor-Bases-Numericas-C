#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <string.h>

void octalBinario(long long int num) {
	system("cls");
	int numNovo[200], numOrdenado[200];
	char numCharOrdem[200];
	long int numFinal, numSalvo=num;
	int a, b, c;
	for(a=0;num>0;a++) {
		numNovo[a] = num%10;
		num/=10;
		b=a;
	}
	for(a=b, c=0;a>=0;a--, c++) {
		numOrdenado[c]=numNovo[a];
		numCharOrdem[c]=numNovo[a];
	}
	printf("%ld(08) = ",numSalvo);
	for(a=0;a<=b;a++) {
		if(numOrdenado[a]==1) {
			printf("001");
		}
		else if(numOrdenado[a]==2) {
			printf("010");
		}
		else if(numOrdenado[a]==3) {
			printf("011");
		}
		else if(numOrdenado[a]==4) {
			printf("100");
		}
		else if(numOrdenado[a]==5) {
			printf("101");
		}
		else if(numOrdenado[a]==6) {
			printf("110");
		}
		else if(numOrdenado[a]==7) {
			printf("111");
		}
	}
	printf("(02)");
}

void octalDecimal(long long int num) {
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
		potencia2[a] = pow(8, a);
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
	printf("%ld(08) = %ld(10)",numSalvo, numFinal);
}

void decimalOctal(long long int num) {
	int a, ehDivisivel=0, deuZero=0, b;
	long long int salvaNum=num, aux, novoNum, numDiv;
	int numNovo[50];
	for(a=0;a<1000 || deuZero==1;a++) {
		
	}
	printf("\n");
	//printf("%lld(10) = ", salvaNum);
	for(a=aux;a>=0;a--) {
		printf("%d", numNovo[a]);
	}
	//printf("(8)");
}

void decimalBinario(long long int num) {
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

int confereZeros(long long int num) {
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

int confereOito(long long int num) {
	int numNovo[200];
	int a, b, res;
	for(a=0;num>0;a++) {
		numNovo[a] = num%10;
		num/=10;
		b=a;
	}
	for(a=b;a>=0;a--) {
		if(numNovo[a] <= -1|| numNovo[a] >= 8) {
			res=0;
		}
		else if (numNovo[a]>=0 || numNovo[a]<=7){
			res=1;
		}
	}
	return res;
}

void menu() {
	int op;
	long long int num;
	system("cls");
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
		int res8 = confereOito(num);
		if(res8==0) {
			system("cls");
			printf("\nVoc� inseriu um n�mero octal inv�lido, voltando ao menu principal...\n");
			system("pause");
			menu();
		}
		else if(res8==1){
			octalBinario(num);
		}
	}
	else if (op==2) {
		int res0 = confereZeros(num);
		if(res0==0) {
			system("cls");
			printf("\nVoc� inseriu um n�mero bin�rio inv�lido, voltando ao menu principal...\n");
			system("pause");
			menu();
		}
		else if(res0==1){
			binarioDecimal(num);
		}
	}
	else if (op==3) {
		decimalBinario(num);
		decimalOctal(num);
	}
	else {
		
	}
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	menu();
}

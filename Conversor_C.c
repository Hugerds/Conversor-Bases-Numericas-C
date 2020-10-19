#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <string.h>

void hexaOctal(long long int num) {
	int numNovo[200], potencia2[200], numOrdenado[200], potencia2ordenado[200], vetMult[200];
	long int numFinal, numSalvo=num;
	int a, b, c;
	printf("%X(16) = %o(8)",num, num);
}

void hexaDecimal(long long int num) {
	int numNovo[200], potencia2[200], numOrdenado[200], potencia2ordenado[200], vetMult[200];
	long int numFinal, numSalvo=num;
	int a, b, c;
	printf("%X(16) = %ld(10)",num, num);
}

void decimalHexa(long long int num) {
	int a=0, ehDivisivel=0, deuZero=0, b, c;
	long long int salvaNum=num, aux, novoNum, numDiv;
	int numOrdenado[50], numFinal[50];
	char numChar[50];
	printf("%lld(10) = ", salvaNum);
	printf("%X", num);
	printf("(16)");
}

void binarioOctal(long long int num) {
	system("cls");
	int numNovo[200], numOrdenado[200];
	long int numFinal, numSalvo=num;
	int a, b, c;
	for(a=0;num>0;a++) {
		numNovo[a] = num%10;
		num/=10;
		b=a;
	}
	for(a=b, c=0;a>=0;a--, c++) {
		numOrdenado[c]=numNovo[a];
	}
	printf("\n");
	for(a=0, c=0;a<=b, c<=b;a++) {
		
	}
	printf("%ld(2) = (8)",numSalvo);
}

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
		if (numOrdenado[a]==0) {
			printf("000");
		}
		else if(numOrdenado[a]==1) {
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
	long long int novoNum=0, a=1, salvaNum=num;
    while (num!=0) {
        novoNum+=(num%8)*a;
        num/=8;
        a*=10;
    }
    printf("%lld(10) = ", salvaNum);
    printf("%lld", novoNum);
    printf("(8)");
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
	printf("Conversor de bases numéricas\n\n");
	printf("Você deseja calcular:\n1-Número octal para todas as bases\n2-Número binário para todas as bases\n3-Número decimal para todas as bases\n4-Número hexadecimal para todas as bases\nSua opção: ");
	do {
		fflush(stdin);
		scanf("%d", &op);
		fflush(stdout);
	} while(op<0 || op>4);
	do {
		if(op==4) {
			fflush(stdin);
			printf("Insira o número que você deseja converter \nSeu número: ");
			scanf("%x", &num);
			fflush(stdout);
			printf("Seu número escolhido foi o %X\n\n", num);
			system("pause");
		}
		else {
			fflush(stdin);
			printf("Insira o número que você deseja converter (MAX 999999999999999)\nSeu número: ");
			scanf("%lld", &num);
			fflush(stdout);
			printf("Seu número escolhido foi o %lld\n\n", num);
		system("pause");
		}
	} while (num<0 || num>999999999999999);
	if (op==1) {
		int res8 = confereOito(num);
		if(res8==0) {
			system("cls");
			printf("\nVocê inseriu um número octal inválido, voltando ao menu principal...\n");
			system("pause");
			menu();
		}
		else if(res8==1){
			system("cls");
			octalBinario(num);
			printf("\n");
			octalDecimal(num);
		}
	}
	else if (op==2) {
		int res0 = confereZeros(num);
		if(res0==0) {
			system("cls");
			printf("\nVocê inseriu um número binário inválido, voltando ao menu principal...\n");
			system("pause");
			menu();
		}
		else if(res0==1){
			binarioOctal(num);
			printf("\n");
			binarioDecimal(num);
		}
	}
	else if (op==3) {
		system("cls");
		decimalOctal(num);
		printf("\n");
		decimalBinario(num);
		printf("\n");
		decimalHexa(num);
	}
	else if(op==4){
		system("cls");
		hexaDecimal(num);
		printf("\n");
		hexaOctal(num);
	}
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	menu();
}

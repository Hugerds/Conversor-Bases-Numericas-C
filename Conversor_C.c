#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void hexaBinario(char num[]) {
	int numNovo[200], numOrdenado[200];
	char numCharOrdem[200], numChar[200];
	long int numFinal;
	int a, b, c;
	printf("%s(16) = ",num);
	for(a=0;a<=b;a++) {
		if (num[a]=='0') {
			printf("0000");
		}
		else if(num[a]=='1') {
			printf("0001");
		}
		else if(num[a]=='2') {
			printf("0010");
		}
		else if(num[a]=='3') {
			printf("0011");
		}
		else if(num[a]=='4') {
			printf("0100");
		}
		else if(num[a]=='5') {
			printf("0101");
		}
		else if(num[a]=='6') {
			printf("0110");
		}
		else if(num[a]=='7') {
			printf("0111");
		}
		else if(num[a]=='8') {
			printf("1000");
		}
		else if(num[a]=='9') {
			printf("1001");
		}
		else if(toupper(num[a])=='A') {
			printf("1010");
		}
		else if(toupper(num[a])=='B') {
			printf("1011");
		}
		else if(toupper(num[a])=='C') {
			printf("1100");
		}
		else if(toupper(num[a])=='D') {
			printf("1101");
		}
		else if(toupper(num[a])=='E') {
			printf("1110");
		}
		else if(toupper(num[a])=='F') {
			printf("1111");
		}
	}
	printf("(02)");
}

//REVISAR
void hexaOctal(char num[]) {
	long long int numNovo[200], potencia2[200], numOrdenado[200], potencia2ordenado[200], vetMult[200], numInt[16];
	long int numFinal;
	int a, b=16, c;
	for(a=0;a<=b;a++) {
		if(num[a]=='0') {
			numInt[a]=0;
		}
		else if(num[a]=='1') {
			numInt[a]=1;
		}
		else if(num[a]=='2') {
			numInt[a]=2;
		}
		else if(num[a]=='3') {
			numInt[a]=3;
		}
		else if(num[a]=='4') {
			numInt[a]=4;
		}
		else if(num[a]=='5') {
			numInt[a]=5;
		}
		else if(num[a]=='6') {
			numInt[a]=6;
		}
		else if(num[a]=='7') {
			numInt[a]=7;
		}
		else if(num[a]=='8') {
			numInt[a]=8;
		}
		else if(num[a]=='9') {
			numInt[a]=9;
		}
		else if(toupper(num[a])=='A') {
			numInt[a]=10;
		}
		else if(toupper(num[a])=='B') {
			numInt[a]=11;
		}
		else if(toupper(num[a])=='C') {
			numInt[a]=12;
		}
		else if(toupper(num[a])=='D') {
			numInt[a]=13;
		}
		else if(toupper(num[a])=='E') {
			numInt[a]=14;
		}
		else if(toupper(num[a])=='F') {
			numInt[a]=15;
		}
		if(num[a]=='\0') {
			b=a;
			break;
		}
	}
}

void hexaDecimal(char num[]) {
	long long int numNovo[200], potencia2[200], numOrdenado[200], potencia2ordenado[200], vetMult[200], numInt[16];
	long int numFinal;
	int a, b=16, c;
	for(a=0;a<=b;a++) {
		if(num[a]=='0') {
			numInt[a]=0;
		}
		else if(num[a]=='1') {
			numInt[a]=1;
		}
		else if(num[a]=='2') {
			numInt[a]=2;
		}
		else if(num[a]=='3') {
			numInt[a]=3;
		}
		else if(num[a]=='4') {
			numInt[a]=4;
		}
		else if(num[a]=='5') {
			numInt[a]=5;
		}
		else if(num[a]=='6') {
			numInt[a]=6;
		}
		else if(num[a]=='7') {
			numInt[a]=7;
		}
		else if(num[a]=='8') {
			numInt[a]=8;
		}
		else if(num[a]=='9') {
			numInt[a]=9;
		}
		else if(toupper(num[a])=='A') {
			numInt[a]=10;
		}
		else if(toupper(num[a])=='B') {
			numInt[a]=11;
		}
		else if(toupper(num[a])=='C') {
			numInt[a]=12;
		}
		else if(toupper(num[a])=='D') {
			numInt[a]=13;
		}
		else if(toupper(num[a])=='E') {
			numInt[a]=14;
		}
		else if(toupper(num[a])=='F') {
			numInt[a]=15;
		}
		if(num[a]=='\0') {
			b=a;
			break;
		}
	}
	for(a=0;a<=b;a++) {
		potencia2[a] = pow(16, a);
	}
	for(a=b-1, c=0;a>=0;a--, c++) {
		potencia2ordenado[c]=potencia2[a];
	}
	for(a=0;a<b;a++) {
		vetMult[a] = potencia2ordenado[a]*numInt[a];
	}
	for(a=0;a<b;a++) {
		numFinal+=vetMult[a];
	}
	printf("%s(16) = %ld(10)", num, numFinal);
}

void binarioOctal(long long int num) {
	long long int pNum = 0, c1 = 0, resto, numSalvo=num, numFinal = 0, c2 = 1;
    while (num != 0) {
        resto=num%10;
        num/=10;
        pNum+=resto*pow(2, c1);
        ++c1;
    }
    while (pNum!=0) {
        numFinal += (pNum % 8) * c2;
        pNum /= 8;
        c2 *= 10;
    }
    
	printf("%lld(2) = %lld(8)",numSalvo, numFinal);
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
	printf("%ld(2) = %ld(10)",numSalvo, numFinal);
}

void octalBinario(long long int num) {
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
	if (numFinal<10) {
		printf("%ld(08) = 0%ld(10)",numSalvo, numFinal);
	}
	else {
		printf("%ld(08) = %ld(10)",numSalvo, numFinal);
	}	
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

void decimalHexa(long long int num) {
	long long int novoNum=0, a=1, b=0, c=0, salvaNum=num;
	int numOrdenado[20], numNovo[20], vetOrdenado[20];
	char numFinal[20];
	for(a=0;num>0;a++) {
		//printf("%lld\n", (num%16));
		numNovo[a] = (num%16);
		num/=16;
		b=a;
	}
    for(a=b, c=0;a>=0;a--, c++) {
		vetOrdenado[c]=numNovo[a];
	}
	printf("%lld(10) = ", salvaNum);
	for(a=0;a<=b;a++) {
		if(vetOrdenado[a]==0) {
			printf("%d", vetOrdenado[a]);
		}
		else if(vetOrdenado[a]==1) {
			printf("%d", vetOrdenado[a]);
		}
		else if(vetOrdenado[a]==2) {
			printf("%d", vetOrdenado[a]);
		}
		else if(vetOrdenado[a]==3) {
			printf("%d", vetOrdenado[a]);
		}
		else if(vetOrdenado[a]==4) {
			printf("%d", vetOrdenado[a]);
		}
		else if(vetOrdenado[a]==5) {
			printf("%d", vetOrdenado[a]);
		}
		else if(vetOrdenado[a]==6) {
			printf("%d", vetOrdenado[a]);
		}
		else if(vetOrdenado[a]==7) {
			printf("%d", vetOrdenado[a]);
		}
		else if(vetOrdenado[a]==8) {
			printf("%d", vetOrdenado[a]);
		}
		else if(vetOrdenado[a]==9) {
			printf("%d", vetOrdenado[a]);
		}
		else if(vetOrdenado[a]==10) {
			printf("A");
		}
		else if(vetOrdenado[a]==11) {
			printf("B");
		}
		else if(vetOrdenado[a]==12) {
			printf("C");
		}
		else if(vetOrdenado[a]==13) {
			printf("D");
		}
		else if(vetOrdenado[a]==14) {
			printf("E");
		}
		else if(vetOrdenado[a]==15) {
			printf("F");
		}
	}
	printf("(16)");
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
	char numChar[16];
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
			gets(numChar);
			fflush(stdout);
			printf("Seu número escolhido foi o %s\n\n", numChar);
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
			system("cls");
			binarioOctal(num);
			printf("\n");
			binarioDecimal(num);
			printf("\n");
		}
	}
	else if (op==3) {
		system("cls");
		printf("%lld(10) = %lld(10)", num, num);
		printf("\n");
		decimalOctal(num);
		printf("\n");
		decimalBinario(num);
		printf("\n");
		decimalHexa(num);
	}
	else if(op==4){
		system("cls");
		hexaDecimal(numChar);
		//printf("\n");
		//hexaOctal(num);
		printf("\n");
		hexaBinario(numChar);
	}
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	menu();
}

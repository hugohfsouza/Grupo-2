#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


bool add(int parteInteira01, int numerador01, int denominador01, int parteInteira02, int numerador02, int denominador02, char resposta[], int tamanhoArrayResposta){
	char numeroEmString[100];
	int i, tamanhoDaStringSomaDasDuasPartes;
	
	float casasDecimais01 = (float) numerador01 / (float) denominador01;
	casasDecimais01 = (float) parteInteira01 + casasDecimais01;
	
	float casasDecimais02 = (float) numerador02 / (float) denominador02;
	casasDecimais02 = (float) parteInteira02 + casasDecimais02;
	
	float somaDasDuasPartes = casasDecimais01 + casasDecimais02;
	
	sprintf(numeroEmString, "%.100f", somaDasDuasPartes);
	
	for(i=0; i<tamanhoArrayResposta; i++){
		resposta[i] = numeroEmString[i];
	}
	

	if(fmod(somaDasDuasPartes, 1) == 0 && somaDasDuasPartes != 1 ){
		return false;
	}else{
		return true;
	}
}

bool subtract(int parteInteira01, int numerador01, int denominador01, int parteInteira02, int numerador02, int denominador02, char resposta[], int tamanhoArrayResposta){
	char numeroEmString[100];
	int i, tamanhoDaStringSomaDasDuasPartes;
	
	float casasDecimais01 = (float) numerador01 / (float) denominador01;
	casasDecimais01 = (float) parteInteira01 + casasDecimais01;
	
	float casasDecimais02 = (float) numerador02 / (float) denominador02;
	casasDecimais02 = (float) parteInteira02 + casasDecimais02;
	
	float somaDasDuasPartes = casasDecimais01 - casasDecimais02;
	
	sprintf(numeroEmString, "%.100f", somaDasDuasPartes);
	
	for(i=0; i<tamanhoArrayResposta; i++){
		resposta[i] = numeroEmString[i];
	}
	

	if(fmod(somaDasDuasPartes, 1) == 0 && somaDasDuasPartes != 1 ){
		return false;
	}else{
		return true;
	}
}




int main(int argc, char *argv[]) {
	char answer[100];
	int c1, n1, d1;
	int c2, n2, d2;
	 
	c1 = 1;
	n1 = 1;
	d1 = 2;
	 
	c2 = 2;
	n2 = 2;
	d2 = 3;
	
	int tamanhoArray = 8;
	
	if(add(c1, n1, d1, c2, n2, d2, answer, tamanhoArray))
	{
		int i;
	    for (i = 0; i< tamanhoArray ;++i) {
        	printf("%c",answer[i]);
    	}
	}
	else
	{
	    printf("o numero e um numero inteiro");
	}

	
	return 0;
}






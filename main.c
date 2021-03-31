#include <stdio.h>
#include <stdbool.h>
#include <math.h>


bool add(int integerPart01, int numerator01, int denominator01, int integerPart02, int numerator02, int denominator02, char result[], int arrayLength){
	char numeroEmString[100];
	int i;
	
	float casasDecimais01 	= (float) numerator01 / (float) denominator01;
	casasDecimais01 		= (float) integerPart01 + casasDecimais01;
	
	float casasDecimais02 	= (float) numerator02 / (float) denominator02;
	casasDecimais02 		= (float) integerPart02 + casasDecimais02;
	
	float somaDasDuasPartes = casasDecimais01 + casasDecimais02;
	
	sprintf(numeroEmString, "%.100f", somaDasDuasPartes);
	
	for(i=0; i<arrayLength; i++){
		result[i] = numeroEmString[i];
	}
	

	if(fmod(somaDasDuasPartes, 1) == 0 && somaDasDuasPartes != 1 ){
		return false;
	}else{
		return true;
	}
}

bool subtract(int integerPart01, int numerator01, int denominator01, int integerPart02, int numerator02, int denominator02, char result[], int arrayLength){
	char numeroEmString[100];
	int i;
	
	float casasDecimais01 	= (float) numerator01 / (float) denominator01;
	casasDecimais01 		= (float) integerPart01 + casasDecimais01;
	
	float casasDecimais02 	= (float) numerator02 / (float) denominator02;
	casasDecimais02 		= (float) integerPart02 + casasDecimais02;
	
	float somaDasDuasPartes = casasDecimais01 - casasDecimais02;
	
	sprintf(numeroEmString, "%.100f", somaDasDuasPartes);
	
	for(i=0; i<arrayLength; i++){
		result[i] = numeroEmString[i];
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






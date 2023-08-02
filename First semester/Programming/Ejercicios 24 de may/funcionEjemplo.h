#include <iostream>

char funcionMinMay(char letra1){
	
	char cletra;
	
	if (letra1>='a'&&letra1<='z'){
	
	cletra = letra1-32;
	
	return cletra;
		
	}
	
	else {
		
		cletra= letra1;
		
		return cletra;
	}

}

char funcionMayMin (char letra2){
	
	char cletra;
	
	if (letra2>='A'&&letra2<='Z'){
	
	cletra = letra2+32;
	
	return cletra;
		
	}
	
	else {
		
		cletra= letra2;
		
		return cletra;
	}	
}

int funcionNumeroParImpar (int numero){
	
	int par=0;
	
	if (numero%2==0){
		
		par=1;
		
		return par;
		
	}
	
	else if (numero%2!=0){
		
		par=2;
		
		return par;
		
	}
	
	par =0; 
	}


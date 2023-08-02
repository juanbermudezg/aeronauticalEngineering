//Archivo de funciones por parte del estudiante Juan Andrés Bermúdez Gómez de la Escuela de Aviación del Ejército del
//pregrado de Ingeniería Aeronáutica en la asignatura de Programación I para el profesor Pedro Fernando Melo.

#include <iostream>

int JuanAndresBermudezGomez (int AndraViviannGomezGomez){				//funcion para obtener el numero M del NACA 4
	
	int MariaStefanieBermudezGomez; //MSBG = Máximo camber de la cuerda.
	
	MariaStefanieBermudezGomez = AndraViviannGomezGomez/1000;			//aqui obtenemos el numero, por ejemplo si tenemos 3000 y lo dividimos en 1000 nos da 3.

	
	if (MariaStefanieBermudezGomez<=4){								//aqui verificamos que se cumpla la condicion de que sea hasta 4
		
		return MariaStefanieBermudezGomez;
		
	}
	
	else{													//si no la cumple la funcion envia un -1, que en el principal lo toma como error
		
		MariaStefanieBermudezGomez = -1;
		
		return MariaStefanieBermudezGomez;
		
	}
	
}

int LunaCarlotaMichuBermudezGomez (int SimonBermudezGomez, int StevenValvuena){			//funcion para encontrar el valor de P o segundo digito
	
	if (StevenValvuena==0){									//la pagina nos señala que si el primer digito es 0, el segundo es 0, por tanto
															//cambiamos lo que haya escrito el usuario en el segundo digito por un 0
		int ShirleyYinethJavelaEnciso;
		
		ShirleyYinethJavelaEnciso = 0;
		
		return ShirleyYinethJavelaEnciso;					//envia el 0 como segundo digito si y solo si el primero es 0
		
	}
	
	else {
	
	int MariaPaulaVaronZapata;							//si el primero no es 0, buscamos de nuevo el primer digito
	
	MariaPaulaVaronZapata = SimonBermudezGomez/1000; 	//para encontrar el primer digito
	
	int ShirleyYinethJavelaEnciso;
	
	ShirleyYinethJavelaEnciso = ((SimonBermudezGomez/100) - (MariaPaulaVaronZapata*10))*10;		//luego de tener el primer digito, tomamos el original y lo dividimos en 100
																								//para encontrar el valor de los dos primeros digitos, luego le restamos el primer digito encontrado
	if (ShirleyYinethJavelaEnciso<=50){															//multiplicado por 10 para que quede un numero entero y luego multiplicamos de nuevo por 10 para
																								//encontrar el porcentaje. Por ejemplo, tenemos el 4300, el primer digito es 4
		return ShirleyYinethJavelaEnciso;														//al dividir el original entre 100 da 43, a este le vamos a restar el primer numero por 10, es decir, 
	}																							//43-40, lo que nos da 3, y al multiplicar esto por 10 nos da un total de 30%
	
	else {
																								//Aqui señalo que si el numero pasa de 50%, da error, eso hace que se retorne un -1
		ShirleyYinethJavelaEnciso = -1;
		
		return ShirleyYinethJavelaEnciso;
		
	}
	
	}

}

int MiguelAntonioCorreaLopez (int EzequielMartinez, int SarayCruz, int EliasVergara){		//tercera funcion para averiguar los dos ultimos digitos.
	
	int GabrielRamirez;
	
	GabrielRamirez = (EzequielMartinez)-((SarayCruz*1000)+(EliasVergara*10));				//aqui recibo el numero original y le resto la suma del primer y segundo digito multiplicamos por 1000 y 10 respestivamente. Por ejemplo
																							//tenemos que el numero original es 4315, y además tenemos que Saray es 4*1000 y Elias 30*10, numeros encontrados con las otras funciones
	if (SarayCruz==0&&EliasVergara==0){														//nos da un total, la resta, de 15, siendo estos los dos ultimos numeros
		
		if (GabrielRamirez<=15){
																							//aqui miro si los dos numeros del inicio son 0, los dos numeros finales no pueden pasar de 15
			return GabrielRamirez;
		}
		
		else{																				//aqui digo que si esos dos numeros se pasan, retorne error o -1
			
			GabrielRamirez = -1;
			
			return GabrielRamirez;
		}
		
	}
	
	else{																					//de igual manera, si los primeros dos numeros no son iguales a 0, verifico que los dos ultimos
																							//numeros sean menores que 40
		if (GabrielRamirez<=40){
			
			return GabrielRamirez;
			
		}
		
		else{
																							//que de no ser el caso, retorne -2 o error para este caso.
			GabrielRamirez=-2;
			
			return GabrielRamirez;
			
		}
		
	}
	
}

float JuanAndresRayoMorales (int SantiagoRicoSosa){												//funcion para encontrar el primer digito de un numero de 5 cifras
	
	float JulianValdez;
	
	JulianValdez = SantiagoRicoSosa/10000;
	
	float JuanitaAcuna;
	
	JuanitaAcuna = (JulianValdez*3)/20;								//metodo que nos indica la pagina para encontrar el numero del 0.05 al 1
	
	if (JulianValdez>6){										//condicion para evitar errores
		
		JuanitaAcuna = -1;
		
		return JuanitaAcuna;
	}
	
	else {
		
		return JuanitaAcuna;
	}
}	

double EmmanuelRodriguez(int AlejandraGaspar){					//funcion para encontrar el segundo digito del NACA 5
	
	int JeinsRodriguez, AlejandraMartinez;
	
	double MonicaTangarife, DoraLigia;
	
	AlejandraMartinez = (AlejandraGaspar/1000)*1000;
	
	JeinsRodriguez = (AlejandraMartinez/10000)*10000;
	
	DoraLigia = (AlejandraMartinez-JeinsRodriguez)/1000;
	
	MonicaTangarife = (DoraLigia/20)*100;			
	
	if (MonicaTangarife>50){				//condición para que no supere el 50% como lo indica en el documento del examen
		
		MonicaTangarife=-1;
		
		return MonicaTangarife;				//si no la cumple, devuleve -1 que significa que existe un error
		
	}
	
	else {
		
		return MonicaTangarife;			//de lo contrario, devuelve el numero en si
		
	}

}

int JoseVicenteQuimbaya (int OctavioMartinez){			//funcion para encontrar el 3 digito de la funcion
	
	int JosePasguastianTutistar;
	
	JosePasguastianTutistar = (OctavioMartinez/10000)*10000;
	
	int JakelineAponte;
	
	JakelineAponte = (OctavioMartinez-JosePasguastianTutistar);
	
	int MarthaCecilia;
																//se utiliza la especialidad de que son enteros para desperdiciar el resto y que podamos encontrarlo facil
	MarthaCecilia = (JakelineAponte/1000)*1000;
	
	int CarlosTello;
	
	CarlosTello = (JakelineAponte-MarthaCecilia)/100;
	
	if (CarlosTello==0){
														//en el tercer numero no puede ser diferente a 1 o 0
		return CarlosTello;
		
	}
	
	else if (CarlosTello==1){
		
		return CarlosTello;
								//por lo que se pone las condiciones 
	}
	
	else{
		
		CarlosTello=-1;			//de no cumplirlas envia el -1
		
		return CarlosTello;
		
	}
	
}

int JuanCamiloTorres (int AdrianCruz, float NatalyRuiz, float OscarPerdonmoGomez, int MalejaPatino){ //funcion para encontrar los ultimos dos digitos
	
	int CarlosCaviedes;
	
	CarlosCaviedes = (AdrianCruz/10000)*10000;						
	
	int CarlosArturoArcila;
	
	CarlosArturoArcila = (AdrianCruz-CarlosCaviedes);
	
	int DanielaQuijano;
	
	DanielaQuijano = (CarlosArturoArcila/1000)*1000;
	
	int LinaRodriguez;
	
	LinaRodriguez = ((CarlosArturoArcila-DanielaQuijano)/100)*100;
	
	int HaroldBarrero;
	
	HaroldBarrero= AdrianCruz - (CarlosCaviedes+DanielaQuijano+LinaRodriguez);
	
	
	if (NatalyRuiz==0&&OscarPerdonmoGomez<=0.15&&MalejaPatino==5) {		//aqui verificamos que se cumpla hasta 15% cuando el perfil alar es simetrico
		
		if (HaroldBarrero>=1&&HaroldBarrero<=15){
		
		return HaroldBarrero;
		
		}
	
		else {
		
		HaroldBarrero=-1;
																				//si no lo cumple returna -1
		return HaroldBarrero;
		
		}
	}
	
	else { 
	
	if (HaroldBarrero>=1&&HaroldBarrero<=40){			//si el perfil alar es asimetrico debe llegar hasta 40
		
		return HaroldBarrero;
		
	}
	
	else {
		
		HaroldBarrero=-1;
										//de lo contrario -1
		return HaroldBarrero;
		
	}
	
}
	
}

float ShirleyLorenaCuellar (float AndresBustamante, float LuisGerardo, float LuisFernando){
	
	double KarolTorres;
	
	KarolTorres = (AndresBustamante*LuisGerardo)/LuisFernando;
	
	return KarolTorres;					//aqui usamos la formula del numero de Reynolds para hallar el resultado, todos con float
	
}

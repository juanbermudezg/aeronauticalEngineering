//Programa creado por parte del estudiante Juan Andrés Bermúdez Gómez de la Escuela de Aviación del Ejército del
//pregrado de Ingeniería Aeronáutica en la asignatura de Programación I para el profesor Pedro Fernando Melo.


#include <iostream>

#include "funcionesParcial3JABG.h"

using namespace std;

int main (){
	
	system("COLOR 4F");		//un poco de estilo, si gusta puede borrarlo profe
	
	int DanielFelipeAlvarado=0, JennifferDiaz=0;		//variables a usar mas adelante

	int AndresFelipeGaitanMontoya=0, BrayanAndradeGomez=0;
		
		char AmparoGomez[50];
		
		cout<<"Bienvenido, por favor ingrese su nombre: "<<endl;	//aqui algo de personalizacion
		
		cin.getline(AmparoGomez, 50);
		
	while(BrayanAndradeGomez<=3){		
		
		cout<<"Muchas gracias "<<AmparoGomez<<". Por favor a continuacion se le presentará un menú."<<endl<<"Eliga las opciones que crea conveniente:"<<endl<<"Presione {1} para ir a NACA 4"<<endl<<"Presione {2} para ir a NACA 5"<<endl<<"Presione {3} para ir a Numero de Reynolds"<<endl<<"Presione {4} para salir del programa."<<endl<<"Tiene 3 intentos para elegir el menu. Por favor no la cague."<<endl;
		
		int LindaGisseteAndradeGomez;
			
		cin>>LindaGisseteAndradeGomez;   //Varaible para elegir las opciones del menu
		
					
		if (LindaGisseteAndradeGomez==1){		//esta es la opcion si elige el 1.
			
			cout<<"Bienvenido a la seccion de NACA 4."<<endl<<"Ingrese el numero NACA 4: "<<endl<<"Ingrese un numero de 4 cifras, no de mas ni de menos. Tiene 3 intentos"<<endl;
			
			int JuanFelipeOcampoSuaza;
			
			while(DanielFelipeAlvarado<=3){										//un bucle para repetir llegado al caso que se equivoque el usuario
			
				cin>>JuanFelipeOcampoSuaza;										//por tal razon el usuario tiene la oportunidad de ingresar lo que quiera hasta 3 intentos
								
				int JuanManuelBermudezGomez;
				
				JuanManuelBermudezGomez=JuanAndresBermudezGomez(JuanFelipeOcampoSuaza);		//aqui recibo el primer digito
				
				int AngieAcevedo;
				
				AngieAcevedo=LunaCarlotaMichuBermudezGomez(JuanFelipeOcampoSuaza, JuanManuelBermudezGomez);		//aqui el segundo digito
				
				int KristtyRodriguez;
				
				KristtyRodriguez = MiguelAntonioCorreaLopez (JuanFelipeOcampoSuaza, JuanManuelBermudezGomez, AngieAcevedo);		//y aqui los dos ultimos digitos

					if (JuanFelipeOcampoSuaza>=0&&JuanFelipeOcampoSuaza<10000){			//aqui miro que el numero sea de 4 cifras y se deja que sea mayor o igual que 0, ya que al nosotros escribir 0012, el programa lo lee como 12 y si coloco que reciba desde 1000 no funcionará el programa, cuando debería funcionar, por tal razon se pone que sea >=0
						
						DanielFelipeAlvarado=0;			//contador de errores
						
						if (JuanManuelBermudezGomez==-1){			//aqui se mira si el primer digito tiene error
							
							cout<<"Lo siento, el numero M o maxima curvatura no puede superar el 4%"<<endl<<"Ingrese de nuevo el numero NACA 4: "<<endl;
							
							DanielFelipeAlvarado++;				//aumenta el contador
							
						}
						
						else{
							
							cout<<"El numero M o maxima curvatura es de "<<JuanManuelBermudezGomez<<"%"<<endl;		//si el primer digito está bien, se procede al siguiente
							
							DanielFelipeAlvarado=0;			//el contador se reinicia
							
							if (AngieAcevedo==-1){		//se verifica si el segundo digito tiene error
								
								cout<<"Lo siento, el numero P o maxima curvatura localizada no debe ser mayor al 50%"<<endl<<"Ingrese de nuevo el numero NACA 4: "<<endl;
								
								DanielFelipeAlvarado++;		//aumenta el contador
								
							}
							else {
								
								cout<<"El numero P o maxima localizada es de "<<AngieAcevedo<<"%"<<endl;		//si el segundo digito está bien, se procede a los otros dos
								
								DanielFelipeAlvarado=0;		//se reinicia el contador
								
								if (KristtyRodriguez==-1){
									
									cout<<"Lo siento, cuando los numeros M y P son 0, el maximo espesor de la cuerda es 15%"<<endl;		//aqui se mira el caso cuando los dos primeros numeros son 0, por lo cual el numero no debe pasar el 15%
									
									DanielFelipeAlvarado++;
								}
								
								else if (KristtyRodriguez==-2){
									
									cout<<"Lo siento, cuando el numero M es distinto de 0, el maximo espesor de la cuerda es de 40%"<<endl;		//aqui se mira el otro error que puede pasar, cuando los dos primeros digitos no son iguales a 0, los dos ultimos digitos no pueden ser mas que 40%
									
									DanielFelipeAlvarado++;
									
								}
								
								else{			//si todo está bien se procede con el programa
									
									DanielFelipeAlvarado=0;		//se reinicia contador
									
									cout<<"El maximo espesor de la cuerda es de "<<KristtyRodriguez<<"%"<<endl;		//se señala el valor de los dos ultimos digitos
									
									if(JuanManuelBermudezGomez==0&&AngieAcevedo==0){		//aqui se observa que si los dos primeros digitos son iguales a 0, el perfil es simetrico
										
										cout<<"El perfil alar es simetrico."<<endl<<"Para volver al menu, digite el numero <5>."<<endl;
										
										cin>>DanielFelipeAlvarado;		//se pone el contador a 5 para salir del bucle
										
									}
									
									else{			//si no son iguales a 0, el perfil será asimetrico
										
										cout<<"El perfil alar es asimetrico."<<endl<<"Para volver al menu, digite el numero <5>."<<endl;
										
										cin>>DanielFelipeAlvarado;//se pone el contador a 5 para salir del bucle
										
									}
									
								}
								
							}
							
						}
						
					}
					
					else if (JuanFelipeOcampoSuaza>'A'&&JuanFelipeOcampoSuaza<'z'){		//aqui un intento de decir si mete vocales pero no funciona, si el usuario mete una vocal, el programa se bloquea solo
						
						cout<<"Lo siento, no puede ingresar letras, por favor vuela a ingredar el numero NACA 4: "<<endl;
						
						DanielFelipeAlvarado++;
						
					}
					
					else{		//aqui se verifica si el usario ingresa mas de 4 digitos, sale error
						
						cout<<"Lo siento, por favor revise la cantidad de digitos ingresados."<<endl<<"Ingrese de nuevo el numero NACA 4: "<<endl;
						
						DanielFelipeAlvarado++;		//aumenta el contador
						
					}
				}
				
				if(DanielFelipeAlvarado!=5){		//aqui el contador cuando aumenta por los errores del usuario, se menciona sutilmente al usuario su problema
					
					cout<<"El programa finalizó por su torpeza señor usuario. Gracias por usar :3"<<endl;
				}
				
				else{		//pero si el contador llegó ahí de manera justa, no se dice nada al usuario
					
					main();		//se regresa al inicio
					
					system("cls"); //y se limpia la consola

				}
			
		}
	
		else if (LindaGisseteAndradeGomez==2){			//aqui es para NACA 5
			
			cout<<"Bienvenido a la seccion de NACA 5."<<endl<<"Ingrese el numero NACA 5: "<<endl<<"Ingrese un numero de 5 cifras, no de mas ni de menos. Tiene 3 intentos"<<endl;
			
			int MarcelaGarzonMadera, JennifferDiaz=0;
			
			while(JennifferDiaz<=3){			//aqui se condiciona para que los errores sean menores que 3
				
				cin>>MarcelaGarzonMadera;
				
				float  OscarPerdonmoGomez;
				
				OscarPerdonmoGomez = JuanAndresRayoMorales(MarcelaGarzonMadera);
				
				int MalejaPatino;
				
				MalejaPatino = EmmanuelRodriguez(MarcelaGarzonMadera);				//aqui se estan recibiendo los digitos
				
				int NatalyRuiz;
				
				NatalyRuiz= JoseVicenteQuimbaya(MarcelaGarzonMadera);
				
				int JuanManuelBetancourth;
				
				JuanManuelBetancourth = JuanCamiloTorres(MarcelaGarzonMadera, NatalyRuiz,OscarPerdonmoGomez,MalejaPatino);
				
				if (MarcelaGarzonMadera>=0&&MarcelaGarzonMadera<100000){		//aqui se condiciona para que sea de 6 cifras
					
					JennifferDiaz=0;
					
					if (OscarPerdonmoGomez==-1){
						
						cout<<"Lo lamento, su primer numero no puede ser mayor que 4. Por favor vuelvalo a intentar."<<endl;		//aqui se verifican errores
						
						JennifferDiaz++;
															
					}
					
					else{
						
						JennifferDiaz=0;
						
						cout<<"El primer digito, el diseño de coeficiente de sustentacion, Cl o L es de "<<OscarPerdonmoGomez<<endl;		//aqui se muestra el primer digito
						
						if(MalejaPatino==-1){
							
							cout<<"Lo lamento, la maxima curvatura localizada no puede pasar del 50%. Por favor vuelva a intentar."<<endl;		//aqui se condiciona que el segundo digito debe ser menor que 5
							
							JennifferDiaz++;
							
						}
						
						else {
							
							JennifferDiaz=0;
							
							cout<<"El segundo digito, o la posición máxima de curvatura dividida por 20 es del "<<MalejaPatino<<"%"<<endl;		//aqui se muestra si no hay problemas
							
							if(NatalyRuiz==-1){
								
								cout<<"Lo lamento, el tercer numero o la linea de curvatura no puede ser diferente de 0 o 1."<<endl<<"Por favor vuelva a intentar."<<endl;
								
								JennifferDiaz++;			//aqui se condiciona si el tercer digito es diferente de 0 o 1
								
							}
							
							else{
								
								cout<<"La linea de curvatura es de "<<NatalyRuiz;  //si no hay ningun problema se muestra el numero
								
								if (NatalyRuiz==0){			//y se el tercer digito es 0 la curvatura es normal
									
									cout<<" haciendo que sea una linea de curvatura normal."<<endl;
									
								}
								
								else if (NatalyRuiz==1){
									
									cout<<" haciendo que sea una linea de curvatura reflexiva."<<endl;		//y si es 1, la curvatura es reflexiva
									
								}
								
								JennifferDiaz=0;
								
								if (JuanManuelBetancourth==-1){
									
									cout<<"Lo lamento, el maximo grosor no corresponde con el tipo de perfil."<<endl;		//aqui si es error
									
									JennifferDiaz++;
									
								}
								
								else {
									
									if (NatalyRuiz==0&&OscarPerdonmoGomez<=0.15&&MalejaPatino==5){
										
										cout<<"El perfil alar es simetrico, por tanto, el grosor como porcentaje de la cuerda es de "<<JuanManuelBetancourth<<"%"<<endl<<"Si quiere volver al menu presione <5>"<<endl;
									
									cin>>JennifferDiaz;   //si cumple con los requisitos es simetrico
									
								}
								else{
									
									cout<<"El perfil alar es asimetrico, por tanto el grosor como porcentaje de la cuerda es de "<<JuanManuelBetancourth<<"%"<<endl<<"Si quiere volver al menu presione <5>"<<endl;
									
									cin>>JennifferDiaz;		//si no, es asimetrico
									
								}
								
							}
							
						}
						
					}
					
				}
				
			}
			
			
				else{
					
					cout<<"Lo siento, su numero debe ser de 5 cifras, por favor intentelo de nuevo."<<endl;		//aqui si comete error en digitar el numero
					
					JennifferDiaz++;
					
				}
				
			}

			if(JennifferDiaz!=5){		//aqui el contador cuando aumenta por los errores del usuario, se menciona sutilmente al usuario su problema
					
			cout<<"El programa finalizó por su torpeza señor usuario. Gracias por usar :3"<<endl;
			
				}
				
				else{		//pero si el contador llegó ahí de manera justa, no se dice nada al usuario
					
					main();		//se regresa al inicio
					
					system("cls"); //y se limpia la consola
			
			
			}
	}
		else if (LindaGisseteAndradeGomez==3){	//aqui si escoje la tercera opcion
			
			system("cls");
			
			cout<<"Bienvenido al apartado del numero de Reynolds, por favor sigue las intrucciones, son las 3:36 am a la hora que escribo esto xD"<<endl;
			
			cout<<"Ingresa por favor la velocidad en m/s: ";		//aqui se pide la velocidad
			
			float KevinCastaneda;
			
			cin>>KevinCastaneda;
			
			cout<<"Ahora el ancho de la cuerda en metros: ";
			
			float JeisonCruz;
								//aqui se pide el ancho de la cuerda
			cin>>JeisonCruz;
			
			cout<<"Por último la viscosidad cinematica en m^2/s: ";
							//aqui la viscosidad cinematica
			float JulianOrjuela;
			
			cin>>JulianOrjuela;
			
			float CristianCastaneda;
			
			CristianCastaneda = ShirleyLorenaCuellar(KevinCastaneda, JeisonCruz, JulianOrjuela);		//aqui se llama la funcion
			
			if (CristianCastaneda<2100){
				
				cout<<"El numero de Reynolds determina un Flujo Laminar."<<endl;		//aqui se mira si es laminar
				
			}
			
			else if(CristianCastaneda>=2100&&CristianCastaneda<4000){
				
				cout<<"El numero de Reynolds determina un Flujo de Transición."<<endl;
										//de transicion
			}
			
			else if (CristianCastaneda>=4000){
				
				cout<<"El numero de Reynolds determina un Flujo Turbulento."<<endl;
				
			}					//o turbulento
			
			cout<<"Ademas el numero de Reynolds para una velocidad de "<<KevinCastaneda<<" m/s."<<endl<<"Un ancho de cuerda de "<<JeisonCruz<<" metros."<<endl<<"Y una viscosidad cinematica de "<<JulianOrjuela<<" m^2/s."<<endl<<"Es de "<<CristianCastaneda<<endl;
			
			cout<<"Si quiere volver al menu presione 0, de lo contrario presione 1: "<<endl;
			
			int JuanBuitrago;		//aqui es para volver a usar el programa
			
			cin>>JuanBuitrago;
			
			if (JuanBuitrago==0){
				
				main();
				
			}
			
			else{
				
					cout<<"Gracias por usar, hecho con muchas horas de trabajo por el estudiante Juan Andres Bermudez Gomez de la Escuela de Aviacion del Ejercito"<<endl<<"En el programa de Ingenieria Aeronautica en la asignatura de Programacion I."<<endl;

				return 0;			//aqui se finaliza
				
			}
		}
		
		else if (LindaGisseteAndradeGomez==4){
			
			system("cls");
						//aqui saliendo del programa si elige el 4
			cout<<"Saliendo del programa, gracias por usar.";
			
			return 0;
			
		}
		
		else{	
			
			cout<<"Revisa lo que pones..."<<endl;		//aqui si depronto se equivoca al usar el menu
			
			BrayanAndradeGomez=BrayanAndradeGomez+1;
			
		}
		
		
	}
	
return 0;
		//finaliza
}

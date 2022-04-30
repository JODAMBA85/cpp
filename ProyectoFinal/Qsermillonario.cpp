/* 
    Autor:       Jonatan David Amaya Barahona
    Universidad: UNAH-VS
    Carrera:     Licenciatura en Informatica Administrativa
    Hora:        19:00 - 20:00
    Catedratico: Master Billy Fernandez
    Clase:       Lenguaje de Programacion I
*/ 


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "comodin.h"

using namespace std;

void usarcomodin(int);
void printComodinDisponible();
void mostrarespuestapublico(int);
void mostrar5050(int);
void mostrarllamada();

 main()
{	 
	//variables 		  
     int a,p=1,z=1;
     int comodinUtilizado=0;
     while(z==1)
     {    
      //Proceso de preguntas 
        cout<<"Quien quiere ser millonario?\n";
        cout<<"*****************************\n\n";
        cout<<"Contesta correctamente estas 15 preguntas y llevate un millon de Lempiras\n";
        cout<<"*************************************************************************\n\n";
        cout<<"Pregunta 1:Primer campeon mundial de futbol de la FIFA \n\n";
        cout<<"1.Brasil\t2. Uruguay\n3. Italia\t4. Francia\n";
        // se va imprir en pantalla 
		printComodinDisponible();
        cout<<"Ingrese su respuesta: ";
        cin>>a;
        if(a==5){
        	// que tipo de comodin desee usar 
            usarcomodin(1);
            cout<<"Ingrese su respuesta: ";
            cin>>a;
        }
     
      if(a!=2){
              cout<<"\nLo sentimos\n";
              p=0;
              }
      if(a==2){
               cout<<"\nCorrecto\nYa tienes 1000 Lempiras\n\n";
               cout<<"Pregunta 2:En que ano se invento el internet\n\n";
               cout<<"1. 1969\t2. 1879\n3. 1989\t4. 1959\n";
               printComodinDisponible();
               cout<<"Ingrese su respuesta: ";
               cin>>a;
               if(a==5){
                usarcomodin(2);
                cout<<"Ingrese su opcion: ";
                cin>>a;
                }
               }
              
              if(a!=1 ){
                        cout<<"\nLo sentimos\n";
                        p=0;
                        }
               if(a==1){
                       cout<<"\nCorrecto\nYa tienes 10000 Lempiras\n\n";       
                       cout<<"Pregunta 3:Maximo goleador de todos los mundiales\n";
                       cout<<"1.Leonel Messi\t2.Pele\n3.Miroslav Klose\t4.Ronaldo Luis Nazario\n";
                        printComodinDisponible();
              			cout<<"Ingrese su respuesta: ";
					   cin>>a;
                       if(a==5){
             		   usarcomodin(3);
               			 cout<<"Ingrese su opcion: ";
               			 cin>>a;
               			 }
                       if(a!=3){
                                cout<<"\nLo sentimos\n";
                                p=0;
                                }
                       if(a==3){
                                cout<<"\nCorrecto\nYa tienes 50000 Lempiras\n\n";
                                cout<<"Pregunta 4:En que ano se abolio el ejercito en costa rica\n";
                                cout<<"1.de diciembre de 1948\t2.15 de septiembre de 1970\n3.de octubre de 1921\t4.21 de octubre 1980\n";
                                printComodinDisponible();
        						cout<<"Ingrese su respuesta: ";
								cin>>a;
                                if(a==5){
				                usarcomodin(4);
				                cout<<"Ingrese su opcion: ";
				                cin>>a;
				                }
                                if(a!=1){
                                         cout<<"\nLo sentimos\n";
                                         p=0;
                                         }
                                if(a==1){
                                         cout<<"\nCorrecto\nYa tienes 100000 Lempiras\n\n";
                                         cout<<"Pregunta 5:Nombre del actor PRINCIPAL de pelicula Hombre en llamas\n";
                                         cout<<"1. Will smith\t2.Denzel washington\n3.Johnny depp\t4.Morgan freeman\n";
                                         printComodinDisponible();
        									cout<<"Ingrese su respuesta: ";
										 cin>>a;
                                         if(a==5){
							                usarcomodin(5);
							                cout<<"Ingrese su opcion: ";
							                cin>>a;
							                }
                                         if(a!=2){
                                                  cout<<"\nLo sentimos\n";
                                                  p=0;
                                                  }
                                         if(a==2){
                                                  cout<<"\nCorrecto\nYa tienes 200000 Lempiras\n\n";
                                                  cout<<"Pregunta 6:Mejor cantante blanco de rap anglosajon\n";
                                                  cout<<"1.Vanilla ice\t2.Kj 52\n3.Eminem\t4.Pitbull\n";
                                                  printComodinDisponible();
        											cout<<"Ingrese su respuesta: ";
													cin>>a;
                                                  if(a==5){
									                usarcomodin(6);
									                cout<<"Ingrese su opcion: ";
									                cin>>a;
									                }
                                                  if(a!=3){
                                                           cout<<"\nLo sentimos\n";
                                                           p=0;
                                                           }
                                                  if(a==3){
                                                           cout<<"\nCorrecto\nYa tienes 300000 Lempiras\n\n";
                                                           cout<<"Pregunta 7:Quien invento el sistema wifi\n";
                                                           cout<<"1.Albert einstein\t2.John wick\n3.Aristoteles \t4.Hedy kiesler\n";
                                                           printComodinDisponible();
        													cout<<"Ingrese su respuesta: ";
															cin>>a;
                                                           if(a==5){
											                usarcomodin(7);
											                cout<<"Ingrese su opcion: ";
											                cin>>a;
											                }
                                                           if(a!=4){
                                                                    cout<<"\nLo sentimos\n";
                                                                    p=0;
                                                                    }
                                                           if(a==4){
                                                                    cout<<"\nCorrecto\nYa tienes 400000 Lempiras\n\n";
                                                                    cout<<"Pregunta 8:Nombre de las tres carabelas de Cristobal colon\n";
                                                                    cout<<"1.La cria, la mancha y cartel de santa\t2.La nave, la sombra y santa espada\n3.La nina, la pinta y la santa maria\t4.La guirra, la vida y santa victoria\n";
                                                                    printComodinDisponible();
															        cout<<"Ingrese su respuesta: ";
																	cin>>a;
                                                                    if(a==5){
													                usarcomodin(8);
													                cout<<"Ingrese su opcion: ";
													                cin>>a;
													                }
                                                                    if(a!=3){
                                                                             cout<<"\nLo sentimos\n";
                                                                             p=0;
                                                                             }
                                                                    if(a==3){
                                                                             cout<<"\nCorrecto\nYa tienes 450000 Lempiras\n\n";
                                                                             cout<<"Pregunta 9:Primer presidente de afroamericano de Estados Unidos de america\n";
                                                                             cout<<"1.Oprah winfrey\t2.Barack Obama\n3.Tommy Tuberville\t4.Michelle Obama\n";
                                                                             printComodinDisponible();
        																	 cout<<"Ingrese su respuesta: ";
																			 cin>>a;
                                                                             if(a==5){
																                usarcomodin(9);
																                cout<<"Ingrese su opcion: ";
																                cin>>a;
																                }
                                                                             if(a!=2){
                                                                                      cout<<"\nLo sentimos\n";
                                                                                      p=0;
                                                                                      }
                                                                             if(a==2){
                                                                                      cout<<"\nCorrecto\nYa tienes 500000 Lempiras\n\n";
                                                                                      cout<<"Pregunta 10:Como se llamo la modena nacional de la republica de el salvador\n";
                                                                                      cout<<"1.El Quetzal\t2.El Peso\n3.El Colon \t4.El dolar\n";
                                                                                      printComodinDisponible();
        																				cout<<"Ingrese su respuesta: ";
																					  cin>>a;
                                                                                      	if(a==5){
																			                usarcomodin(10);
																			                cout<<"Ingrese su opcion: ";
																			                cin>>a;
																			                }
                                                                                      if(a!=3){
                                                                                               cout<<"\nLo sentimos\n";
                                                                                               p=0;
                                                                                               }
                                                                                      if(a==3){
                                                                                      			cout<<"\nCorrecto\nYa tienes 600000 Lempiras\n\n";
			                                                                                    cout<<"Pregunta 11:Franco tirador mas letal del ejercito americano\n";
			                                                                                    cout<<"1.Chris Kyle\t2.Simo Hayha\n3.Juba\t4.Liudmila Pavlichenko\n";
			                                                                                    printComodinDisponible();
		        																				cout<<"Ingrese su respuesta: ";
																							 	 cin>>a;
			                                                                                    if(a==5){
																					                usarcomodin(11);
																					                cout<<"Ingrese su opcion: ";
																					                cin>>a;
																					                }
			                                                                                    if(a!=1){
			                                                                                             cout<<"\nLo sentimos\n";
			                                                                                             p=0;
                                                                                                        }
                                                                                                		if(a==1){
			                                                                                      				cout<<"\nCorrecto\nYa tienes 650000 Lempiras\n\n";
					                                                                                    		cout<<"Pregunta 12:Fundadores de tesla motor\n";
					                                                                                   			cout<<"1.Soichiro Honda\t2.Martin Eberhard y Marc Tarpenning\n3.Gustav Otto\t4.Enzo Ferrari \n";
					                                                                                    		printComodinDisponible();
						        																				cout<<"Ingrese su respuesta: ";
																											 	 cin>>a;
					                                                                                    		if(a==5){
																									                usarcomodin(12);
																									                cout<<"Ingrese su opcion: ";
																									                cin>>a;
																									                }
			                                                                                    				if(a!=2){
                                                                                               					cout<<"\nLo sentimos\n";
                                                                                               					p=0;
                                                                                              					}
                                                                                      							if(a==2){	cout<<"\nCorrecto\nYa tienes 700000 Lempirass\n\n";
                                                                                      										cout<<"Pregunta 13:Creacion del primer lenguaje de programaci0n normalizado universal\n";
                                                                                      										cout<<"1.Elon Musk\t2.Bill gates\n3.anonymous\t4.John Backus\n";
                                                                                      										printComodinDisponible();
									        																				cout<<"Ingrese su respuesta: ";
																														 	 cin>>a;
                                                                                      										if(a==5){
																											                usarcomodin(13);
																											                cout<<"Ingrese su opcion: ";
																											                cin>>a;
																											                }
                                                                                      							if(a!=4){
                                                                                           				    			cout<<"\nLo sentimos\n";
                                                                                             							p=0;
                                                                                            		   					}
                                                                                     			 						if(a==4){cout<<"\nCorrecto\nYa tienes 750000 Lempiras\n\n";
                                                                                      											cout<<"Pregunta 14:Maximo encestador de la NBA actualmente\n";
                                                                                      											cout<<"1.Lebron james\t2.Kareem abdul-jabbar\n3.Koby Bryant\t4.Michael jordan\n";
                                                                                      											printComodinDisponible();
											        																				cout<<"Ingrese su respuesta: ";
																																 	 cin>>a;
                                                                                      											if(a==5){
																													                usarcomodin(14);
																													                cout<<"Ingrese su opcion: ";
																													                cin>>a;
																													                }
                                                                                     									 		if(a!=2){
                                                                                          									    		cout<<"\nLo sentimos\n";
                                                                                           									    		p=0;
                                                                                              											}
                                                                                    										 	if(a==2){cout<<"\nCorrecto\nYa tienes 800000 Lempiras\n\n";
                                                                                      													cout<<"Pregunta 15:cual es la medida del territorio nacional de honduras\n";
                                                                                    													cout<<"1.112,482 km2\t2.112,492 km2\n3.122,472 km2\t4.111,462 km2\n";
                                                                                     			 										printComodinDisponible();
												        																				cout<<"Ingrese su respuesta: ";
																																	 	 cin>>a;
                                                                                     			 										if(a==5){
																															                usarcomodin(15);
																															                cout<<"Ingrese su opcion: ";
																															                cin>>a;
																															                }
                                                                                     	 												if(a!=2){
                                                                                               													cout<<"\nLo sentimos\n";
                                                                                              													p=0;
                                                                                               													}
                                                                                      													if(a==2){
                                                                                              													cout<<"\nCorrecto\nHas ganado el millon de Lempiras\n";
                                                                                              													cout<<"*********************************";
                                                                                              													cout<<endl;
                                                                                              													cout<<"FELICIDADES YA ERES UN MILLONARIO";
                                                                                              													cout<<endl;
                                                                                              													cout<<"*********************************";
                                                                                               }		}		}		}		}				}
																							   													
                                                                                      }
                                                                             }
                                                                    }
                                                           }
                                                  }
                                         }
                                }
                       }
			 // fin del ciclo    
             cout<<endl;          
             cout<<"Si desea seguir intentandolo pulsa 1,sino pulsa 0\n";
             cin>>z;}          
      }
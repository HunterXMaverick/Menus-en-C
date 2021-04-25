#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int x,int y){
		HANDLE hcon;
		hcon=GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos;
		dwPos.X=x;
		dwPos.Y=y;

		SetConsoleCursorPosition(hcon,dwPos);
}

float ingresarDatos(float numero);
int selec2;

int main(){
	char w,salir;
	int x=7,y;

    float moles, volumen, peso, molaridad, molalidad, mol, masa, PM , solvente, molar;

	do{
		system("cls");
		system("color F0");
	    char e=205;

		gotoxy(55,2); printf("Navega con:");gotoxy(46,4); printf("[Derecha]--> | <--[Izquierda]");gotoxy(52,5); printf("[ENTER]seleccionar");
		gotoxy(10,13); printf("FORMULAS ");
		gotoxy(55,13); printf("CONCEPTOS ");
		gotoxy(101,13); printf("SALIR ");
		gotoxy(x,14);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",e,e,e,e,e,e,e,e,e,e,e,e,e,e);

			w=getch();
			if(w==75 || w==77){
					gotoxy(x,14);
					printf("              ");

				if(w==75){
					x=x-45;
				}
				if(w==77){
					x=x+45;
				}
				if(x<7 || x>100){
					if(x<7){
						x=7;
					}
					else{
						x=7;
					}
				}
				gotoxy(x,14);
				printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",e,e,e,e,e,e,e,e,e,e,e,e,e,e);

			}

			if(w==13){
				system("cls");
				switch(x){
					case 7:
						printf("\t----------FORMULAS----------\n");

                        do{
                                system("cls");
                                system("color E9");

                                printf("\n\n");

                                printf("\t                --------------------Eliga  una de las siguientes formulas--------------------           \n");
                                printf("");
                                printf("\n \t 1. Moles (n)\n \n  \t 2. Molaridad(M)\n \n \t 3. Molalidad(m)\n \n \t 4. Fraccion molar(Xm)\n \n \t 5. Regresar al menu\n \n \t Opcion: ");
                                scanf("%d", &selec2);
                                switch(selec2)
                                {
                                    case 1:
                                        system("color 10");
                                        printf("\n");

                                        printf("\n \t \t \t \t \t \t \tDESCRIPCION");
                                        printf("\n");

                                        printf("\n\t Es la cantidad de materia que contiene determinada molecula, y equivale a la cantidad de atomos que \n \t hay en 12 gramos del isotopo carbono-12 (12C). (Raffino, 2020). \n\n\t La Formula es: \n\n\t n = (masa del compuesto [g])/(PM del compuesto)");
                                        printf("\n");

                                        printf("\n\n \t Insertar datos de: \n\t -masa del compuesto [g]\n\t -PM del compuesto", 162);
                                        printf("\n");

                                        masa=ingresarDatos(masa);
                                        PM=ingresarDatos(PM);


                                        mol=(float)(masa/PM);


                                        printf("\n \t La Mol es: %5.3f ", mol);
                                        printf("\n\n");
                                        system("pause");
                                    break;
                                    case 2:

                                        system("color 5B");

                                        printf("\n");

                                        printf("\n \t \t \t \t \t \t \tDESCRIPCION");
                                        printf("\n");

                                        printf("\n\t Es la relacion del numero de moles de soluto y el volumen en litros de la solucion. \n\n\t La Formula es: \n\n\t M = (n soluto)/(volumen de la solucion [L])");
                                        printf("\n");

                                        printf("\n\n \t Insertar datos de: \n\t -n soluto\n \t -volumen de la solucion", 162);
                                        printf("\n");

                                        moles=ingresarDatos(moles);
                                        volumen=ingresarDatos(volumen);

                                        molaridad=(float)(moles/volumen);

                                        printf("\n \t La Molaridad es: %f ", molaridad,"\n" );
                                        printf("\n\n");
                                        system("pause");
                                    break;
                                    case 3:
                                        system("color 10");
                                        printf("\n");

                                        printf("\n \t \t \t \t \t \t \tDESCRIPCION");
                                        printf("\n");

                                        printf("\n\t Es la relacion del numero de moles de soluto que estan disueltos en un kilogramo de solvente. \n\n\t La Formula es: \n\n\t m = (n soluto)/(masa del solvente [kg])");
                                        printf("\n");

                                        printf("\n\n \t Insertar datos de: \n\t -n soluto\n \t -masa del solvente [kg]", 162);
                                        printf("\n");

                                        moles=ingresarDatos(moles);
                                        peso=ingresarDatos(peso);

                                        molalidad=(float)(moles/peso);

                                        printf("\n \t La Molalidad es: %5.3f ", molalidad);
                                        printf("\n\n");
                                        system("pause");
                                    break;
                                    case 4:

                                        system("color 5B");
                                        printf("\n");

                                        printf("\n \t \t \t \t \t \t \tDESCRIPCION");
                                        printf("\n");

                                        printf("\n\t Es la relacion entre el numero de los moles de un compuesto o elemento y el numero total de moles \n \t de los componentes la solucion en que se encuentra. \n\n\t La Formula es: \n\n\t Xm = (n soluto)/(n soluto)+(n solvente)");
                                        printf("\n");

                                        printf("\n\n \t Insertar datos de: \n\t -n soluto\n \t -n soluto + n solvente", 162);
                                        printf("\n");


                                        moles=ingresarDatos(moles);
                                        solvente=ingresarDatos(solvente);

                                        molar=(float)(moles/(moles+solvente));

                                        printf("\n \t La Franccion molar es: %f ", molar,"\n" );
                                        printf("\n\n");
                                        system("pause");
                                    break;
                                    case 5:
                                        printf("\n\t Presione ENTER para salir");
                                    break;
                                }
                        } while(selec2 != 5);

						break;

					case 52:
					    system("color A7");

						printf("\t----------ELEMENTOS QUIMICOS----------\n");

						do{
                                system("cls");
                                system("color E9");

                                printf("\t                      --------------------Eliga un Metal--------------------           \n");
                                printf("");
                                printf("\n 1. Metales Ligeros\n \n 2. Metales Pesados de Transicion\n \n 3. No Metales \n \n 4. Gases Nobles \n \n 5.Regresar al menu\n \n Opcion: ");
                                scanf("%d", &selec2);
                                switch(selec2)
                                {
                                    case 1:
                                        system("color 10");

                                        printf("\t --------------------- I-A -----------------------    \n");

                                        printf("\n\t Nombre            Letra                    Peso");

                                        printf("\n\t Hidrogendo          H                      1.00797");
                                        printf("\n\t Litio               Li                     6.941");
                                        printf("\n\t Sodio               Na                     22.9897");
                                        printf("\n\t Potacio             K                      39.098");
                                        printf("\n\t Rubidio             Rb                     85.4678");
                                        printf("\n\t Cesio               Cs                     132.905");
                                        printf("\n\t Francio             Fr                     1.87");
                                        printf("\n\t Ununennio           Uue                    -");

                                        printf("\n\n");


                                        printf("\t --------------------- II-A -----------------------    \n");

                                        printf("\n\t Nombre            Letra                    Peso");

                                        printf("\n\t Berilio           B                        9.01218");
                                        printf("\n\t Magnesio          Mg                       24.3050");
                                        printf("\n\t Calcio            Ca                       40.078");
                                        printf("\n\t Estroncio         Sr                       87.62");
                                        printf("\n\t Bario             Ba                       137.327");
                                        printf("\n\t Radio             Ra                       226.02");
                                        printf("\n\t Unbinilio         Ubn                      -");


                                        printf("\n\n");
                                        system("pause");

                                    break;
                                    case 2:

                                        system("color 5B");

                                        printf("\t --------------------- III-B -----------------------    \n");

                                        printf("\n\t Nombre            Letra                    Peso");

                                        printf("\n\t Escandio          Sc                      44.955");
                                        printf("\n\t Ytrio             Y                       88..905");
                                        printf("\n\t Lutecio           Lu                      175.0");
                                        printf("\n\t Lawrencio         Lr                      260");
                                        printf("\n\t Unbiunio          Ubu                     -");

                                        printf("\n\n");


                                        printf("\t --------------------- IV-B -----------------------    \n");

                                        printf("\n\t Nombre            Letra                    Peso");

                                        printf("\n\t Titanio           Ti                       47.867");
                                        printf("\n\t Circonio          Zr                       91.224");
                                        printf("\n\t Hafnio            Hf                       178.49");
                                        printf("\n\t Rutherfordio      Rf                       261");
                                        printf("\n\t Unbibio           Ubb                      -");

                                        printf("\n\n");

                                        printf("\t --------------------- V-B -----------------------    \n");

                                        printf("\n\t Nombre            Letra                    Peso");

                                        printf("\n\t Vanado            V                        50.94");
                                        printf("\n\t Niobio            Nb                       92.906");
                                        printf("\n\t Tantalio          Ta                       180.94");
                                        printf("\n\t Dubnio            Db                       262");
                                        printf("\n\t Unbitrio          Ubt                      -");

                                        printf("\n\n");

                                        printf("\t --------------------- VI-B -----------------------    \n");

                                        printf("\n\t Nombre            Letra                    Peso");

                                        printf("\n\t Cromo             V                        51.996");
                                        printf("\n\t Molybdeno         Mo                       95.64");
                                        printf("\n\t Wolframio         W                        183.84");
                                        printf("\n\t Seaborgio         Sg                       263");
                                        printf("\n\t Unbitrio          Ubq                      -");

                                        printf("\n\n");

                                        printf("\t --------------------- VII-B -----------------------    \n");

                                        printf("\n\t Nombre            Letra                    Peso");

                                        printf("\n\t Manganeso         Mn                       54.938");
                                        printf("\n\t Tecnecio          Tc                       98.90");
                                        printf("\n\t Renio             Re                       186.20");
                                        printf("\n\t Bohrio            Bh                       262");
                                        printf("\n\t Unbipentio        Ubp                      -");

                                        printf("\n\n");

                                        printf("\t --------------------- VIII-B -----------------------    \n");

                                        printf("\n\t Nombre            Letra                    Peso");

                                        printf("\n\t Hierro            Fe                       55.845");
                                        printf("\n\t Rutenio           Ru                       101.07");
                                        printf("\n\t Osmio             Os                       190.23");
                                        printf("\n\t Hassio            Hs                       265");
                                        printf("\n\t Unbihexio         Ubh                      -");

                                        printf("\n\n");

                                        printf("\t --------------------- I-B -----------------------    \n");

                                        printf("\n\t Nombre            Letra                    Peso");

                                        printf("\n\t Hierro            Fe                       55.845");
                                        printf("\n\t Rutenio           Ru                       101.07");
                                        printf("\n\t Osmio             Os                       190.23");
                                        printf("\n\t Hassio            Hs                       265");
                                        printf("\n\t Unbihexio         Ubh                      -");

                                        printf("\n\n");
                                        system("pause");
                                    break;
                                    case 3:

                                        system("color 5B");

                                         printf("\t --------------------- III-A -----------------------    \n");

                                        printf("\n\t Nombre            Letra                    Peso");

                                        printf("\n\t Boro                B                        10.811");
                                        printf("\n\t Aluminio            Al                       26.981");
                                        printf("\n\t Galio               Ga                       69.72");
                                        printf("\n\t Indio               In                       114.81");
                                        printf("\n\t Talio               Ti                       204.38");
                                        printf("\n\t Ununtrio            Uut                      284");
                                        printf("\n\t Untriunio           Utu                      -");

                                        printf("\n\n");

                                        printf("\t --------------------- IV-A -----------------------    \n");

                                        printf("\n\t Nombre            Letra                    Peso");

                                        printf("\n\t Carbono             C                        12.011");
                                        printf("\n\t Silicio             Si                       28.085");
                                        printf("\n\t Germanio            Ge                       72.64");
                                        printf("\n\t Estaño              Sn                       118.71");
                                        printf("\n\t Plomo               Pb                       207.2");
                                        printf("\n\t Ununquadio          Uuq                      289");
                                        printf("\n\t Untriunio           Utb                      -");

                                        printf("\n\n");

                                        printf("\t --------------------- V-A -----------------------    \n");

                                        printf("\n\t Nombre            Letra                    Peso");

                                        printf("\n\t Nitrogeno           N                        14.006");
                                        printf("\n\t Fosforo             P                        30.973");
                                        printf("\n\t Arcenico            As                       74.921");
                                        printf("\n\t Antimonio           Sb                       121.76");
                                        printf("\n\t Bismuto             Bi                       208.98");
                                        printf("\n\t Ununpentio          Uup                      288");
                                        printf("\n\t Untritrio           Utt                      -");

                                        printf("\n\n");

                                        printf("\t --------------------- VI-A -----------------------    \n");

                                        printf("\n\t Nombre            Letra                    Peso");

                                        printf("\n\t Oxigeno             O                        15.999");
                                        printf("\n\t Azufre              S                        32.065");
                                        printf("\n\t Selenio             Se                       78.95");
                                        printf("\n\t Telurio             Te                       127.6");
                                        printf("\n\t Polonio             Po                       209");
                                        printf("\n\t Ununhexio           Uuh                      292");
                                        printf("\n\t Untriquadio         Utq                      -");

                                        printf("\n\n");

                                        printf("\t --------------------- VII-A -----------------------    \n");

                                        printf("\n\t Nombre            Letra                    Peso");

                                        printf("\n\t Fluro             F                        18.998");
                                        printf("\n\t Cloro             Cl                       35.453");
                                        printf("\n\t Bromo             Ar                       79.904");
                                        printf("\n\t Iodo              I                        126.9");
                                        printf("\n\t Astato            At                       210");
                                        printf("\n\t Ununseptio        Uus                      -");
                                        printf("\n\t Untripentio       Utp                      -");

                                        printf("\n\n");

                                        system("pause");
                                    break;
                                    case 4:

                                        system("color 5B");

                                         printf("\t --------------------- VIII-A -----------------------    \n");

                                        printf("\n\t Nombre            Letra                    Peso");

                                        printf("\n\t Helio             He                       4.0026");
                                        printf("\n\t Neon              Ne                       20.179");
                                        printf("\n\t Argon             Ar                       39.798");
                                        printf("\n\t Kripton           Kr                       83.798");
                                        printf("\n\t Xenon             Xe                       131.29");
                                        printf("\n\t Radon             Rn                       222");
                                        printf("\n\t Ununoctio         Uuo                      -");
                                        printf("\n\t Untrihexio        Uth                      -");

                                        printf("\n\n");
                                        system("pause");
                                    break;
                                    case 5:
                                        printf("\n\t Presione ENTER para salir");
                                    break;
                                }
                        } while(selec2 != 5);


						break;
				}
				if(x==97){
					do{
						system("cls");
						printf("En realidad desea salir?\n\n");
						printf("[ENTER]-si-----no-[ESC]\n");
						salir=getch();
						if(salir==13){
								//salir1();
							return 0;;
						}

					}while(salir!=27);

				}
				getch();

			}



	}while(1);

	return 0;
}

float ingresarDatos(float num){
    printf("\n\t Ingrese el valor correspondiente: ");
    scanf ("%d", &num);
    return num;
}

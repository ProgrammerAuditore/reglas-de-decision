#include "Run.h"

// Compilar
// gcc -c Main.c -I"./fnc" -I"./criterios" -I"./src/" -std=c99 && gcc -o Main Main.o

int main(){
	CLEAN;
	char Opcion;

	do{
		CLEAN;
		fnc_MessagesMenu();
		Opcion = '\0';
		printf("Selecciona una opcion: ");
		Opcion = getchar();
		BUFFERFREE;
		
		if( Opcion != '\n'){
			switch (Opcion){
				case '0': break; break;
				case '1': fnc_AddTable(); break;
				case '2': OPTION(fnc_ShowTable); break;
				case '3': if(EnabledOpction){ EnabledOpction = false; }else{ OPTIONERROR }break;
				case '4': OPTION(CriterioWald); break;
				case '5': OPTION(CriterioMaxiMax); break;
				case '6': OPTION(CriterioHurwicz); break;
				case '7': OPTION(CriterioLaPlace); break;
				case '8': OPTION(CriterioSavage); break;
				default: OPTIONERROR;
			}
		}
		
	}while(Opcion != '0');

	printf("THE END ");
	BUFFERFREE;
return 0;	
}

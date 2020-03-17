// Variables y Funciones (Macros) 

#ifdef __linux__
	#define CLEAN system("clear");
#elif __WIN32
	#define CLEAN system("cls");
#endif

#define BUFFERFREE if(getchar() != '\n') \
					while(getchar() != '\n');

#define OPTIONERROR \
	printf("Lo siento, opcion incorrecta."); \
	BUFFERFREE;	\

#define OPTION( fnc ) \
	if(EnabledOpction){ fnc(); }else{ OPTIONERROR; } 

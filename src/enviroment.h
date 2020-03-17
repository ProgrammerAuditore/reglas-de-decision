// Variables globales
int Oi[250]; // Optimista
int Si[250]; // Pesimista

int columnas = 0; 	//  | |
int filas = 0;		// -----
int casillas[250];
int itemF=0, itemC=0, casilla = 0; 
double _Ri[3] = {0,0}; // Resultado
bool EnabledOpction = false; // Habilitar o Deshabilitar funciones
bool ViewTable = false;

char HeadTitle[10][250] ={
"################## MENU ###################\n", // 0
"################## ADD TABLE ###################\n", // 1
"################## SHOW TABLE ###################\n", // 2
"################## CRITERIO DE WALD ###################\n", // 3
"################## CRITERIO DE MAXIMAX ###################\n", // 4
"################## CRITERIO DE HURWICZ ###################\n", // 5
"################## CRITERIO DE LAPLACE ###################\n", // 6
"################## CRITERIO DE SAVAGE ###################\n" // 7
};

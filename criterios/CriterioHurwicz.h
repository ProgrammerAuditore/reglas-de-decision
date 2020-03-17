void CriterioHurwicz(){

	CLEAN;
	double _CH[250];
	_Ri[1] = 0;
	double nivel_SiOi = 0; // Niveles de optimismo y pesisimismo
	printf("%s", HeadTitle[5]);
	ViewTable = true;
	fnc_ShowTable();

	printf("Introduzca el nivel de optimismo ( 0 - 1): a = ");
	scanf("%lf", &nivel_SiOi);
	BUFFERFREE;
	
	if( nivel_SiOi >= 0 && nivel_SiOi <= 1){
		
		// Seleccionar el numero mayor (Oi) y multiplicarlo por el nivel de a
		// Seleccionar el numero menor (Si) y multiplicarlo por el (1 - nivel de a )
		// Luego sumarlos. 	
		for(itemF=0; itemF < filas; itemF++){
			_CH[itemF] = ((double)Oi[itemF] * nivel_SiOi) +  ((double)Si[itemF] * (1 - nivel_SiOi));
		}	
			
		// Seleccionar el numero mayor (Ri)
		printf("Los resultados de [(Oi*a) + (1-a)*Si] de cada respectivo fila \n");	
		for(itemF=0; itemF < filas; itemF++){
			if( _CH[itemF] > _Ri[1] ){
				_Ri[0] = itemF;
				_Ri[1] = _CH[itemF];
			}
			printf("%i>[%f]\n", itemF, _CH[itemF]);
		}
		printf("\n");
		printf("NOTA:\n (1) Seleccionar los numeros mayores de cada fila de la tabla, y \n" \
				"multiplicarlo por 0.7.\n" \
				" (2) Seleccionar los numeros menores de cada fila de la tabla, y " \
				"multiplicarlo por 0.3.\n" \
				" (3) Sumar las operaciones (1) y (2) de cada respectivo fila de la tabla. \n" \
				" (4) El numero mayor (de las operaciones) es el criterio de Hurwicz. \n");

		printf("El criterio de Hurwicz es: %i>[%f] \n", (int)_Ri[0] , _Ri[1]);

	}else{
		printf("Lo siento, el rango es de 0 a 1. \n");
	}

	ViewTable = false;
	BUFFERFREE;

}

void CriterioMaxiMax(){
	
	CLEAN;
	_Ri[1] = Oi[0];
	printf("%s", HeadTitle[4]);
	ViewTable = true;
	fnc_ShowTable();
	
	// Seleccionar el numero mayor (Oi) de los numeros mayores (Oi) 
	printf("Los numeros mayores de cada respectivo fila \n");
	for(itemF=0; itemF < filas; itemF++){
		if( Oi[itemF] > _Ri[1] ){
			_Ri[0] = itemF;
			_Ri[1] =  Oi[itemF];
		}
		printf("%i>[%i]\n", itemF, Oi[itemF]);
	}

	ViewTable = false;
	printf("\n");
	printf("NOTA: Seleccionar los numeros mayores de cada fila de la tabla, y \n" \
				"el numero mayor (de los numeros mayores), es el criterio de MaxiMax. \n");
	printf("El criterio de MaxiMax es: %i>[%i] \n", (int)_Ri[0], (int)_Ri[1]);
	BUFFERFREE;

}

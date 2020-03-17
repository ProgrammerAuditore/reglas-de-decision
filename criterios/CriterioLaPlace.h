void CriterioLaPlace(){

	CLEAN;
	double sumaDeFilas[250] = {0};
	_Ri[1] = 0;
	casilla=0;
	printf("%s", HeadTitle[6]);
	ViewTable = true;
	fnc_ShowTable();

	// Sumar cada casilla de cada fila y dividirlo entre el numero, 
	// del estado de la naturaleza (columnas), y el numero mayor es el criterio de LaPlace.
	for(itemF=0; itemF < filas; itemF++){
		for(itemC=0; itemC < columnas; itemC++){
			// Sumar cada fila
			sumaDeFilas[itemF] += (double) casillas[casilla];
			casilla++;
		}
		// Divir cada fila entre el estados de la naturaleza
		sumaDeFilas[itemF] = sumaDeFilas[itemF] / (double)columnas;
	}
	
	// Buscar el numero mayor
	printf("Los resultados de las sumas de cada fila entre estados de la naturaleza  \n");
	for(itemF=0; itemF < filas; itemF++){
		if(sumaDeFilas[itemF] > _Ri[1] ){
			_Ri[0] = itemF;
			_Ri[1] = sumaDeFilas[itemF];
		}
		printf("%i>[%f] \n", itemF, sumaDeFilas[itemF]);
	}

	ViewTable = false;
	printf("\n");
	printf("NOTA: Sumar todos los numeros, y dividirlo entre el numero de \n" \
			"estado de naturaleza ( o columnas) de cada fila de la tabla, \n" \
			"y el numero mayor es el criterio de LaPlace. \n");
	printf("El criterio de LaPlace es: %i>[%f] \n", (int)_Ri[0] , _Ri[1]);
	BUFFERFREE;

}

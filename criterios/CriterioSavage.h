void CriterioSavage(){
	CLEAN;
	double casillasN[250] = {0};
	int cNA = 0;
	printf("%s", HeadTitle[7]);
	ViewTable = true;
	fnc_ShowTable();

	for(itemC=0; itemC < columnas; itemC++){
		
		// casillas se empieza a contar depende de las columnas
		casilla=itemC+1;
		
		// El numero mayor de cada columna
		int nmayor = Oi[itemC];
		
		// Buscamos los numeros mayores de cada columna respectivamente
		for(itemF=0; itemF < filas; itemF++){	
			if(casillas[casilla-1] >= nmayor)
				nmayor = casillas[casilla-1];
			
			casilla+=2;
		}
		
		// Crear una nueva tabla
		casilla=itemC+1;
		for(itemF=0; itemF < filas; itemF++){
			//printf("%i>[%i - %i] ## ", nmayor - casillas[casilla-1], nmayor, casillas[casilla-1]);
			casillasN[cNA] = nmayor - casillas[casilla-1];
			casilla+=2;
			cNA++;
		}
		
		//printf("  nmayor %i>[%i] \n", itemC,nmayor);
	}
	
	// Organizar la nueva tabla por filas
	double OiN[250] = {0};
	casilla=0;
	cNA=0;
	for(itemC=0; itemC < columnas; itemC++){
		casilla=itemC+1;
		for(itemF=0; itemF < filas; itemF++){
			//printf("%.1f - ", casillasN[casilla-1] );
			OiN[cNA] = casillasN[casilla-1];
			casilla+=2;
			cNA++;
		}
		//printf("\n");
	}
	
	
	// Seleecionar los numeros mayores de la nueva tabla
	casilla = 0;
	double _Oi[250] = {0};
	int nmayor = 0;
	printf("Los numeros mayores de cada respectivo fila \n");
	for(itemF=0; itemF < filas; itemF++){
		nmayor = 0;
		for(itemC=0; itemC < columnas; itemC++){
			if(OiN[casilla] >= nmayor)
				nmayor = OiN[casilla]; 
			printf("%f # ", OiN[casilla]);
			casilla++;
		}
		_Oi[itemF] = nmayor;
		
		printf("  ## %i \n", nmayor);
	}

	// Seleccionar el numero mayor
	int elMayor=0;
	for(itemF=0; itemF < filas; itemF++){
		if(_Oi[itemF] >= elMayor){
			elMayor =  _Oi[itemF];
		}
	}
	
	// Seleccionar el numero menor como referencia el numero mayor
	_Ri[1] = elMayor;
	for(itemF=0; itemF < filas; itemF++){
		if(_Oi[itemF] <= _Ri[1]){
			_Ri[0] = itemF;
			_Ri[1] = _Oi[itemF];
		}		
	}
	
	ViewTable = false;
	printf("\n");
	printf("NOTA:\n (1) Seleccionar los numeros mayores de cada columna de la tabla. \n" \
				" (2) Restar el numero mayor de cada columna, los numeros de cada columna \n" \
				"creado asi una nueva tabla con valores distintos. \n" \
				" (3) Seleccionar los numero mayores de cada fila de la tabla. \n" \
				" (4) El numero mayor (de la tabla nueva) es el criterio de Savage. \n");
	printf("El criterio de Savage es: %i>[%f] \n", (int)_Ri[0], _Ri[1]);
	BUFFERFREE;
	
}

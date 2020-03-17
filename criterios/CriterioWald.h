void CriterioWald(){

		CLEAN;
		_Ri[1] = Si[0]; // Resultado
		printf("%s", HeadTitle[3]);
		ViewTable = true;
		fnc_ShowTable();

		// Seleccionart el numero mayor (Oi) de los numeros menores (Si) 
		printf("Los numeros menores de cada respectivo fila \n");
		for(itemF = 0 ; itemF < filas; itemF++){
			if( Si[itemF] >= _Ri[1] ){
				_Ri[0] = itemF;
				_Ri[1] = Si[itemF];
			}
			printf("%i>[%i]\n", itemF ,Si[itemF]);
		}
		printf("\n");
		printf("NOTA: Seleccionar los numeros menores de cada fila de la tabla, y \n" \
				"el numero mayor (de los numeros menores), es el criterio de Wald. \n");
		printf("El criterio de Wald es: %i>[%i]\n", (int)_Ri[0], (int)_Ri[1]);
		
		ViewTable = false;
		BUFFERFREE;	

}

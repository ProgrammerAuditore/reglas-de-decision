void fnc_AddTable(){
	
	CLEAN;
	casilla=0;
	printf("%s", HeadTitle[1]);

	printf("Introduzca el numero de filas: ");
	scanf("%i", &filas);
	printf("Introduzca el numero de columnas:");
	scanf("%i", &columnas);

	for(itemF = 0;  itemF < filas; itemF++){
		for(itemC=0; itemC < columnas; itemC++){
			printf("Introduzca un numero para el campo (%i,%i): ", itemF, itemC);
			scanf("%i", &casillas[casilla]);
			casilla++;
		}
	}
	
	fnc_SearchOiSi();
	EnabledOpction = true;
	BUFFERFREE;
}

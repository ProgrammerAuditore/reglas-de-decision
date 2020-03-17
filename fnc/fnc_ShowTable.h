void fnc_ShowTable(){
	
	if(!ViewTable) CLEAN;
	if(!ViewTable) printf("%s", HeadTitle[2]);
	casilla = 0;

	for(itemF=0; itemF < filas; itemF++){

		for(itemC=0; itemC < columnas; itemC++){
			printf(" %i>[%i] ## ", itemF , casillas[casilla]);
			casilla++;
		}

		printf("\n");
		printf("---------------------------------------");
		printf("\n");
	}

	if(!ViewTable) BUFFERFREE;
}

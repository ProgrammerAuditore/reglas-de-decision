void fnc_SearchOiSi(){
		casilla=0;
		for(itemF = 0 ; itemF < filas; itemF++){
			
			// Aqui busco el numero mayor
			int nmayor = casillas[casilla];
			for(itemC=0; itemC < columnas; itemC++){
				if(casillas[casilla] >= nmayor){
					nmayor = casillas[casilla];
				}
					casilla++;
			}
			
			Oi[itemF] = nmayor;
			int nmenor = nmayor;
			casilla -= columnas;
			
			// Aqui busco el numero menor
			for(itemC=0; itemC < columnas; itemC++){
				if(casillas[casilla] < nmenor)
					nmenor = casillas[casilla];
				casilla++;
			}
			Si[itemF] = nmenor;
		}	
}

void fnc_MessagesMenu(){
	printf("%s", HeadTitle[0]);
	printf("1 > Add table \n");
	if(EnabledOpction){
		printf("2 > Show table \n");
		printf("3 > Delete table \n");
		printf("4 > Critero de Wald \n");
		printf("5 > Critero de MaxiMax \n");
		printf("6 > Critero de Hurwicz \n");
		printf("7 > Critero de LaPlace \n");
		printf("8 > Critero de Savage \n");
	}
	printf("0 > Exit \n");
}

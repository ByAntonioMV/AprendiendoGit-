#include <stdio.h>
#define tam 5
int opcion=0,frente=-1,final=-1,cola[tam-1],i=0,y=0,m=0,fe=0,fi=0,s=0,t=0,n=0;

void llena (){
	if (((frente==0)&&(final==tam-1))||(final+1==frente)){
		printf("\n La cola esta llena");
	}
}
void vacia (){
	if ((frente==-1)&&(final==-1)){
		printf ("\n La cola esta vacia");
	}
}
void insertar (){
	
	
	if (final==tam-1){
		i=0;
		final=-1;
	}if (i<=tam-1){
		if (m==0){
			frente++;
			m=100;
		}
		final++;
		printf ("\n Ingrese un dato:");
		scanf ("%d", &cola[final]);
		
		i++;
	}
}
void sacar (){
	if (frente==tam-1){
		frente=0;
	}
	printf ("\n Se saco el dato:%d", cola[frente]);
	frente ++;
	
}
void mostrar (){
	if ((frente==frente)&&(final==tam-1)){
		printf ("\n Entra en el primer si");
		for (y=frente;y<=final;y++){
			printf ("%d ", cola[y]);
		}
	}
	if (final+1==frente){
		printf ("\n entra en el los ciclos");
		for (fe=frente;fe<=tam-1;fe++){
			printf ("%d ", cola[fe]);
			
		}
		for (fi=0;fi<=final;fi++){
			printf ("%d ", cola[fi]);
		}
	}
}

main (){
		
	while (opcion != '\6'){
		
		printf ("\n**********************************");	
		printf ("\n 1 Llena ");
		printf ("\n 2 Vacia ");
		printf ("\n 3 Insertar");
		printf ("\n 4 Sacar");
		printf ("\n 5 Mostrar");
		printf ("\n 6 Salir");
		printf ("\n Ingrese una opcion:");
		scanf ("%d", &opcion);
		
			
		switch (opcion){
			case 1:{
				llena ();
							
				break;
			}
			case 2:{
				vacia();
				
				break;
			}
			case 3:{
				insertar();
				
				break;
			}
			case 4:{
				sacar();
				break;
			}
			case 5:{
				mostrar();
				break;
			}
		}
	}	
}


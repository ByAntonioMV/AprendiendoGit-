#include <stdio.h>
#define tam 5

int opcion=0,tope=-1,pila[tam],y=0;

void lleno (){
	if (tope == tam-1){
		printf ("\n La pila esta llena");
	}else{
		printf ("\n La pila no esta llena");
	}
}
void vacio (){
	if (tope==-1){
		printf ("\n ---[La pila esta vacia]---");
	}else{
		printf ("\n la pila no esta vacia");
	}
}
void insertar (){
	if (tope < tam-1){
		tope++;
		
		printf ("\n Ingresa un dato:");
		scanf ("%d", &pila[tope]);
		
		printf ("EL tope esta en:%d", tope);	
	}else
		printf ("\n La pila esta llena");
}
int sacar (){
	int num;
	
	num = pila[tope];
	tope = tope-1;
	return num;
}
void mostrar (){
	
	int i = tope;
	
	for (i;i>=0;i--){
		printf ("\n [%d]", pila[i]);
	}
	
}

main (){
	
	
	while (opcion != '\6'){
		
	
		
		printf ("\n**********************************");
		printf ("\n");
		printf ("\n 1 Lleno");
		printf ("\n 2 Vacio ");
		printf ("\n 3 Insertar");
		printf ("\n 4 Sacar");
		printf ("\n 5 Mostrar ");
		printf ("\n 6 Salir");
		printf ("\n Ingrese una opcion:");
		scanf ("%d", &opcion);
		
			
		switch (opcion){
			case 1:{
				lleno();
							
				break;
			}
			case 2:{
				vacio();
				
				break;
			}
			case 3:{
				insertar ();
				
				break;
			}
			case 4:{
				y = sacar();
				printf ("\n EL elemento que se saco de la pila es: %d", y);
				break;
			}
			case 5:{
				mostrar ();
				break;
			}
		}
	}	
}





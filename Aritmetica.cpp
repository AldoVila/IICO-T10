#include <stdio.h>
int main ()
{	int Opcion; 
	int NS1, NS2, NS3;
	int NR1, NR2, NR3;
	int NM1, NM2, NM3;
	int ND1,ND2, ND3;

	printf("Hola, este programa realizara funciones especificas,\n de acuerdo a lo que se le solicite.\n");
	printf("\nEl numero 1 para realizar sumas de 2 digitos.\n");
	printf("\nEl numero 2 para realizar restas de 2 digitos.\n");
	printf("\nEl numero 3 para realizar multiplicaciones de 2 digitos.\n"),
	printf("\nEl numero 4 para realizar divisiones de 2 digitos.\n");
	printf("\nEl numero de lo que desea que ocurra.\n");
	printf("\n\n");
	scanf("%i", &Opcion);
	
	if(Opcion=1)
	{printf("\nSuma\n");
	 printf("Introduza el primer numero: ");
	 scanf("%i",&NS1);
	 printf("Introduza el segundo numero: ");
	 scanf("%i",&NS2);
	 NS3=NS1+NS2;
	 printf("El resultado es:%i",NS3);
	}
	else(Opcion=2);
	{printf("\nResta\n");
	 printf("Introduza el primer numero: ");
	 scanf("%i",&NR1);
	 printf("Introduza el segundo numero: ");
	 scanf("%i",&NR2);
	 NR3=NR1-NR2;
	 printf("El resultado es:%i",NR3);
	}
	
	printf("\nIngrese un numero valido");
	
return 0;
}

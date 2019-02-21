#include<stdio.h>
int fibonacci(int x)
{
	int A_F[35];
	A_F[0] = 0;
	A_F[1] = 1;
	int cont, num;
	for (cont=2;cont<35;cont++)
	{
		A_F[cont] = A_F[cont-1] + A_F[cont-2];
	}
	num=A_F[x];
	return num;
}
int main()
{
	system("color f2");
	printf("\n\t\t\tPrograma 12 Fibonacci Arreglos");
	printf("\n\t\t\t______________________________");
	printf("\n\tEste programa te mostrara los primeros numeros que deses ver");
	printf("\n\tde la sucecion de Fibonacci.  \1\n\n\n");

	system("pause");
	system("cls");
	int opci;
	do{
		int n, i, numf;
		printf("Cuantos numeros quieres ver? ");
		scanf("%d",&n);
		while(n>35)
		{
			printf("Lo siento demasiado grande el numero\n");
			printf("Intenta con uno menor\n");
			printf("Cuantos numeros quieres ver? ");
		    scanf("%d",&n);
		}
		for(i=1;i<=n;i++)
		{
			numf = fibonacci(i);
			printf(" %d \n",numf);
		}
		printf("\nDesea repetir el programa?\n");
		printf("\tSi=1\tNo=0\t");
		scanf("%d",&opci);
		while(opci!=1 && opci!=0)
		{
			printf("Opcion no valida intente de nuevo.");
			printf("\nDesea repetir el programa?\n");
		    printf("\tSi=1\tNo=0\t");
		    scanf("%d",&opci);
		}
		system("cls");
    }while(opci==1);
	return 0;
}


/*
	Pido 5 valores numéricos por pantalla e indico el mayor y el menor.
	Devuelvo la suma final.

	>>> TERMINADO <<<
*/

#include <stdio.h>

float analizo_num(void);

int main()
{
	char pregunta;
	int resultado;
	printf("Bienvenido a mi programa...\n");
	printf("Si me das 5 numeros puedo decirte el menor, el mayor y darte la suma de todos\n");
	resultado = analizo_num();
	printf("La suma final es: %d\n", resultado);
	return 0;
}

float analizo_num(void)
{
	int num;
	int resultado = 0;
	int mayor = 0, menor = 65535;
	printf("Ingrese los numeros\n");
	for (int x = 1; x < 6; x++)
	{
		printf(">>> ");
		scanf("%d", &num);
		if (num > mayor)
		{
			mayor = num;
		}
		if (num < menor)
		{
			menor = num;
		}
		resultado = resultado + num;
	}
	printf("El numero menor es: %d\n", menor);
	printf("El numero mayor es: %d\n", mayor);
/*
	printf("Ingrese los 5 numeros, separados por un ENTER\n>>> ");
	scanf("%f", &num1);
	printf(">>> ");
	scanf("%f", &num2);
	printf(">>> ");
	scanf("%f", &num3);
	printf(">>> ");
	scanf("%f", &num4);
	printf(">>> ");
	scanf("%f", &num5);
	// Calculo el Mayor
	if ((num1 > num2) && (num1 > num3) && (num1 > num4) && (num1 > num5))
	{
		printf("El numero mayor es: %f\n", num1);
	}
	else if ((num2 > num1) && (num2 > num3) && (num2 > num4) && (num2 > num5))
	{
		printf("El numero mayor es: %f\n", num2);
	}
	else if ((num3 > num1) && (num3 > num2) && (num3 > num4) && (num3 > num5))
	{
		printf("El numero mayor es: %f\n", num3);
	}
	else if ((num4 > num1) && (num4 > num2) && (num4 > num3) && (num4 > num5))
	{
		printf("El numero mayor es: %f\n", num4);
	}
	else if ((num5 > num1) && (num5 > num2) && (num5 > num3) && (num5 > num4))
	{
		printf("El numero mayor es: %f\n", num5);
	}

	// Calculo el menor

	if ((num1 < num2) && (num1 < num3) && (num1 < num4) && (num1 < num5))
	{
		printf("El numero menor es: %f\n", num1);
	}
	else if ((num2 < num1) && (num2 < num3) && (num2 < num4) && (num2 < num5))
	{
		printf("El numero menor es: %f\n", num2);;
	}
	else if ((num3 < num1) && (num3 < num2) && (num3 < num4) && (num3 < num5))
	{
		printf("El numero menor es: %f\n", num3);
	}
	else if ((num4 < num1) && (num4 < num2) && (num4 < num3) && (num4 < num5))
	{
		printf("El numero menor es: %f\n", num4);
	}
	else if ((num5 < num1) && (num5 < num2) && (num5 < num3) && (num5 < num4))
	{
		printf("El numero menor es: %f\n", num5);
	}
	*/
	return (resultado);
}
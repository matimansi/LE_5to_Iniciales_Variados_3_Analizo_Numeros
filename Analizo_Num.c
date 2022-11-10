
#include <stdio.h>

float analizo_num(void);

int main()
{
	char pregunta;
	int resultado;
	printf("\nBienvenido a mi programa...\n");
	printf("Si me das 5 numeros puedo decirte el menor, el mayor y darte la suma de todos\n");
	resultado = analizo_num();
	printf("La suma final es: %d\n\n", resultado);
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
	return (resultado);
}
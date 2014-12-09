#include <stdio.h>

int main(void)
{
	int oudrente, nieuwrente, oudsaldo, nieuwsaldo, loop;

	printf("Welkom\n");

	printf("\nVoer uw saldo in : ");
	scanf("%d", &oudsaldo);

	printf("\nVoer uw rente in : ");
	scanf("%d", &oudrente);

	printf("\n\nUw huidig saldo is %d en uw te ontvangen rente is %d%", oudrente, oudrente);

	for (loop = 1; loop != 10; loop += 1)
	{
		saldo = saldo * rente;
		printf("\nVoer uw rente in : %d", saldo);
	}

	getchar();
	getchar();
}
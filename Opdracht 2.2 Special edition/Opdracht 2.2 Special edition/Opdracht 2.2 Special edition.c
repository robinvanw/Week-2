#include <stdio.h>

int main(void)
{
	int jaar;												//defineer jaar als een integer(duh)
	float rente, nieuwrente, oudsaldo, nieuwsaldo;			//defineer al die andere meuk als floats(no shit sherlock)

	printf("Welkom\n");										//Een plezant welkomsberichtje (altijd fijn)

	printf("\nVoer uw saldo in : ");						//Vraag huidig saldo op 
	scanf("%f", &oudsaldo);									//Save waarde naar oudsaldo

	printf("\nVoer uw rente in : ");						//Hetzelfde
	scanf("%f", &rente);									//En nogmaals

	printf("\n\nUw huidig saldo is %.2f euro en uw te ontvangen rente is %.2f%%\n", oudsaldo, rente);		//Print een opsomming van de ingevulde waardes

	for (jaar = 1; jaar <= 10; jaar += 1)																	//For-loop om de 10 jaren af te tellen (met int jaar)
	{
		nieuwrente = oudsaldo * (rente / 100);																//De nieuwe rente is het oude saldo, maal de rente gedeeld door honderd
		nieuwsaldo = oudsaldo + nieuwrente;																	//Het nieuwe saldo wordt het oude, plus de nieuwe rente

		printf("\nUw rente na %2.d jaar is : %.2f \t uw nieuwe saldo is %.2f", jaar,nieuwrente,nieuwsaldo);	//Print dat hele zaakie netjes af

		oudsaldo = nieuwsaldo;																				//En maak het oude saldo het nieuwe, waar je de volgende cyclus mee begint
	}

	getchar();
	getchar();
}
#include <stdio.h>

/* Programma che legge 10 interi e ne stampa i reciproci. il programma
 * non stampa il reciproco quando l'utente introduce 0 */
int main() {
	    int numero;              // un numero da leggere
		
		/* leggi 10 numeri */
		for(int i=1;i<=10;i++) {
			    printf("Introduci un intero, please.\n");
				scanf("%d", &numero);
				/* se e' diverso da 0 stampa il reciproco, altrimenti continua */
				if(numero!=0)
					    printf("%f\n", 1.0/numero);
				else {
					    printf("Stai sbagliando Fra!\n");
						continue;
				}
		}
}

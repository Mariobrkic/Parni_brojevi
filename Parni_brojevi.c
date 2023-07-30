#include <stdio.h>

int main() {

	int poljeA[10];
	int *poljeB = NULL;
	int i, k = 0, parni=0;


	printf("Ucitajte 10 cijelih brojeva:\n");
	for (i = 0; i < 10; i++) scanf("%d", &*(poljeA + i));

	for (i = 0; i < 10; i++) {

		if (*(poljeA + i) % 2 == 0) {

			parni++;
			poljeB = (int *)realloc(poljeB, parni*sizeof(int));

			if (poljeB == NULL) {
				printf("Nema dovoljno memorije.\n");
				return 0;
			}

			*(poljeB + k) = *(poljeA + i);
			k++;

		}

	}

	printf("Clanovi polja A su:\n");
	for (i = 0; i < 10; i++) printf("%d ", *(poljeA + i));
	printf("\n");

	printf("Clanovi polja B su:\n");
	for (i = 0; i < parni; i++) printf("%d ", *(poljeB + i));
	printf("\n");

	free(poljeB);

	system("pause");

	return 0;

}
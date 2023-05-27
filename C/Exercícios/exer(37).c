#include <stdio.h>

int main() {
	int i, j;
	int mat[4][4];
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &mat[i][j]);
        }
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	int somaDP = 0, somaDS = 0;

	for (i = 0; i < 4; i++) {
		somaDP += mat[i][i];
	}

	for (i = 0; i < 4; i++) {
		somaDS += mat[i][4-i-1];
	}

	printf("\nSoma das linhas: ");
	int vetL[4];
	for (i = 0; i < 4; i++) {
		vetL[i] = 0;
		for (j = 0; j < 4; j++) {
			vetL[i] += mat[i][j];
		}
	}
	for (i = 0; i < 4; i++) {
		printf("%d ", vetL[i]);
	}

	printf("\nSoma das colunas: ");
	int vetC[4];
	for (j = 0; j < 4; j++) {
		vetC[j] = 0;
		for (i = 0; i < 4; i++) {
			vetC[j] += mat[i][j];
		}
	}
	for (i = 0; i < 4; i++) {
		printf("%d ", vetC[i]);
	}
	
	printf("\nSoma diagonal principal %d e secundaria %d\n", somaDP, somaDS);

	int testaL = 1, testaC = 1;
	for (i = 1; i <  4; i++) {
		if (vetL[i] != vetL[i-1]) {
			testaL = 0;
			break;
		} else if (vetC[i] != vetC[i-1]) {
			testaC = 0;
			break;
		}
	}
	if (testaL && testaC && somaDP == somaDS && somaDP == vetL[0]) {
		printf("Quadrado magico");
	} else {
		printf("Quadrado nao magico");
	}
	return 0;
}
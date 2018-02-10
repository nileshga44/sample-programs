#include "stdio.h"
#include "string.h"
#include <stdlib.h>

/*
 * Description: Matrix implemented as 1-D array.
 */

int main() {
	int *matrix;
	int m, n, i;
	printf("Enter rows and columns: ");
	scanf("%d%d", &m, &n);
	matrix = (int *)malloc(sizeof(int)*m*n);
	printf("**** Matrix values ****\n");
	for (i = 0; i < m*n; i++) {
		*matrix = i;
		printf("%d\n", *matrix);
		matrix++;
	}
	return 0;
}

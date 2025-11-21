#include <stdio.h>
int main() {
    int A[2][2] = { {1, 0}, {0, 1} }; // BP avoids Salt (1,0) Sugar avoids Sugar (0,1)
    int B[2][5] = { {1, 0, 1, 1, 0}, {0, 1, 1, 0, 1} }; 
    int C[2][5] = {0}; 
    int i,j,k;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 5; j++) {
            for (k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for(i=0;i<2;i++)
    {
    	for(j=0;j<5;j++)
    	{
    		printf("%d ",C[i][j]);
		}
		printf("\n");
	}
    printf("BP patients should avoid: ");
    for (j = 0; j < 5; j++) if (C[0][j]) printf("Food%d ", j+1);
    printf("\nSugar patients should avoid: ");
    for (j = 0; j < 5; j++) if (C[1][j]) printf("Food%d ", j+1);

    return 0;
}


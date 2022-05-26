#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    int d = 2*n-1;
    int matrix[d][d];
     
    for(int k=0; k<n; k++)    
      for(int i=k; i<d-k; i++)
        for(int j=k; j<d-k; j++)
            matrix[i][j] = n-k;
            // printf("k=%d i=%d j=%d ans=%d\n", k, i, j, n-k);
            
    for(int i=0; i<d; i++){
      for(int j=0; j<d; j++)
         printf("%d ", matrix[i][j]);
         
      printf("\n");     
    }         
    return 0;
}
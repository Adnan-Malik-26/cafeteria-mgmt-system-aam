// C Program to perform matrix multiplication
#include <stdio.h>
#define MAX 50
int main() {
  // Variable Declaration and Array Declaration
  int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
  int arows, acolumns, brows, bcolumns;
  int i,j,k;
  int sum=0;

  printf("Enter the number of rows and columns of matrix a: \n");
  scanf("%d%d", &arows, &acolumns);
  // To input the elements of matrix a by the user
  printf("Enter the elements of matrix a:\n");
  for (i=0; i<arows; i++) {
    for (j=0; j<acolumns; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter the number of rows and columns of matrix b:\n");
  scanf("%d%d", &brows, &bcolumns);
  if (brows!= acolumns) {
    printf("Sorry! we cannot multiply the matrices a and b\n");
  }
  else
  {
    // To input the elements of matrix b by the user
    printf("Enter the elements of matrix b:\n");
    for(i=0; i<brows; i++) {
      for(j=0; j<bcolumns; j++) {
        scanf("%d", &b[i][j]);
      }
    }
  }
    printf("\n");
      // To perform matrix multiplication
    for(i=0; i<arows; i++) {
      for(j=0; j<bcolumns; j++) {
        for(k=0; k<brows; k++)
        {
          sum= sum+a[i][k]*b[k][j];
        }
        product[i][j]= sum;
        sum= 0;
      }
    }
    // To print the elements of Resultant Matrix
    printf("Resultant matrix\n");
    printf("Product of entered matrices:-\n");
    for (i=0; i<arows; i++) {
      for(j=0; j<bcolumns; j++) {
        printf("%d\t", product[i][j]);
      }
      printf("\n");
    }
  return 0;
}
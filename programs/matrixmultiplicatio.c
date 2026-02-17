//This peogram is written to perform matrix multiplication of two 3x3 matrices in C.
#include<stdio.h>
int matrixMultiplication(int A[3][3], int B[3][3], int C[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            C[i][j]=0;
            for(int k=0;k<3;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
}
int main(){
    int A[3][3],B[3][3],C[3][3];
    printf("Enter elements of first matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&B[i][j]);
        }
    }
    matrixMultiplication(A,B,C);
    printf("Result of matrix multiplication:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}
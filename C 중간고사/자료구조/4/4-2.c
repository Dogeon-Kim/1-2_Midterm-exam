// 전치행렬 변환
#include <stdio.h>
#define ROWS 3
#define COLS 3
void inputMatrix(int a[][COLS]);
void transMatrix(int a[][COLS],int b[][COLS]);
void printMatrix(int a[][COLS]);
int i, j;
int main(){
    int array1[ROWS][COLS], array2[ROWS][COLS];
	inputMatrix(array1);	
    transMatrix(array1,array2);
    printMatrix(array1);
	printf("\n   전치행렬 출력\n");
	printf("  --------------\n");
    printMatrix(array2);
    return 0;
}
void inputMatrix(int a[][COLS]){
	for(i=0; i<ROWS; i++) for(j=0; j<COLS; j++) scanf("%d", &a[i][j]);
}
void transMatrix(int a[][COLS],int b[][COLS]){
	for(i=0; i<COLS; i++) for(j=0; j<ROWS; j++) b[j][i]=a[i][j];
}
void printMatrix(int a[][COLS]){
	for(i=0; i<ROWS; i++){
		for(j=0; j<COLS; j++) printf("%4d ", a[i][j]);
		printf("\n");
	}
}
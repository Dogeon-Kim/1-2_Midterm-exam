// 행렬 곱셈 대한 조사
#include <stdio.h>
void inputArray(int a[][3], int r);
void outputArray(int a[][3], int r);
void addMatrix(int a[][3], int b[][3], int r);
void subMatrix(int a[][3], int b[][3], int r);
void scalarMul(int a[][3], int r, int n);
int i, j;
int main(){
	int A[2][3], B[2][3], row=2, col=3, num;
	printf("2*3 행렬의 각 원소의 값을 입력하시오.\n");
	inputArray(A, row);
	inputArray(B, row);
	printf("행렬 A, B\n");
	outputArray(A, row);
	outputArray(B, row);
	//
	printf("행렬합 \n");
	addMatrix(A, B, row );
	printf("행렬차 \n");
	subMatrix(A, B, row );
	//
	printf("곱할 정수 입력\n");
	scanf("%d", &num);
	scalarMul(A, row, num);
	return 0;
}
void inputArray(int a[][3], int r){
    for(i=0; i<r; i++) for(j=0; j<3; j++) scanf("%d", &a[i][j]); //r행 3열을 입력받는 코드를 작성
}
void outputArray(int a[][3], int r){
    for(i=0; i<r; i++, puts("")) for(j=0; j<3; j++) printf("%5d", a[i][j]); //r행 3열을 출력하는 코드를 작성
		}
void addMatrix(int a[][3], int b[][3], int r){
    for(i=0; i<r; i++, puts("")) for(j=0; j<3; j++) printf("%5d", a[i][j]+b[i][j]); //r행 3열을 출력하는 코드를 작성
}
void subMatrix(int a[][3], int b[][3], int r){
    for(i=0; i<r; i++, puts("")) for(j=0; j<3; j++) printf("%5d", a[i][j]-b[i][j]);
}
void scalarMul(int a[][3], int r, int n){
    for(i=0; i<r; i++, puts("")) for(j=0; j<3; j++) printf("%5d", n*a[i][j]);
}
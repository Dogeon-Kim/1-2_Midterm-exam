// 2차원 배열 초기화 및 출력
#include<stdio.h>
int main(){
	int jumsu[2][4] = { { 80, 96, 83, 100 }, { 88, 100, 96, 98 }};
	int i, j;
	int row=2, col=4;
	for( i = 0 ; i < row ; i++ ){
		for( j = 0 ; j < col ; j ++ ) printf( "%5d", jumsu[i][j] );
		printf("\n");
	}
}

// 2차원 배열 입력 및 출력
#include<stdio.h>
void inputArray( int a[][3], int r);
void outputArray( int a[][3], int r);
int i, j;
int main(){
	int array[4][3];
	int row = 4;
	
	inputArray( array, row );
	outputArray( array, row );
}
void inputArray( int a[][3], int r){
    for(i=0; i<r; i++) for(j=0; j<3; j++) scanf("%d", a[i][j]);
}
void outputArray( int a[][3], int r){
    for(i=0; i<r; i++) for(j=0; j<3; j++) printf("%5d", a[i][j]);
    printf("\n");
}

// 점수 총합, 평균 
#include <stdio.h>
void inputArray( int a[][4], int row );
int main(){
	int score[3][4], i, j, tot;
	double avg;
	inputArray( score, 3);
	for(i=0; i<3; i++){
		tot=0;
		for(j=0; j<4; j++) tot+=score[i][j];
		avg = tot/4.;
		printf("총점 : %d, 평균 : %.2lf\n", tot, avg);
	}
	return 0;
}
void inputArray( int a[][4], int row ){
	for(int i=0; i<row; i++) for(int j=0; j<4; j++) scanf("%d", &a[i][j]);
}
    
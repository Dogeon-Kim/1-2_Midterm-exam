// 피겨 스케이팅 점수 계산
#include <stdio.h>
#include <stdlib.h>
void genRandom(int a[][5], int r);
void outputArray(int a[][5], int r);
float averageScore(int *row, int size);
int i, j;
int main(){
	int score[4][5];
	genRandom(score, 4);
	outputArray(score, 4);
	for(i=0; i<4; i++) printf("선수 %d : %.2f\n", i+1, averageScore(score[i], 5));
	return 0;
} 
void genRandom(int a[][5], int r){
	for(i=0; i<r; i++) for(j=0; j<5; j++) a[i][j]=rand()%10+1; // 이 부분에 rand 함수를 이용해 1~10 정수 생성
}
void outputArray(int a[][5], int r){
	for(i=0; i<r; i++, puts("")) for(j=0; j<5; j++) printf("%d", a[i][j]); // a배열의 r행 5열의 데이터 출력
}
float averageScore( int *row, int size ){ // 선수 한명의 점수를 입력 받아 절사 평균을 구하여 출력
	int max=0, min=0;
	float sum=0;
	for(i=0; i<size; i++){
		sum+=*(row+i); //row[i]
		if(row[max] < row[i]) min=i;
		else if(row[min] > row[i]) min=i;
	}
	return (sum-row[max]-row[min])/size-2;
}
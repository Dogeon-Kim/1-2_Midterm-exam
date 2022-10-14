// 2차원 배열 1차원 배열로 출력
#include <stdio.h>
int main() {
	int a[3][4] = {0};
	for( int i ; i < 3 ; i ++ ) printf( "%8X\n", a[i] ) ;
	return 0;
}

// 총점과 평균 계산
#include <stdio.h>
void inputArray( int a[][4], int row );
int i, j;
int main(){
	int score[3][4], tot;
	double avg;
	//printf("학생 3명, 각각 네 과목의 점수를 입력하세요\n");
	inputArray( score, 3);
	//각 학생의 총점과 평균을 계산하여 출력
	for(i=0;i<3;i++){
		tot = 0;
		for(j=0;j<4;j++) tot += score[i][j];
		avg = tot / 4.;
		printf("총점 : %d, 평균 : %.2lf\n",tot, avg);
	}
	return 0;
}
void inputArray( int a[][4], int row ){
	for(i=0;i<row;i++) for(j=0;j<4;j++) scanf("%d",&a[i][j]);
}
// 원점과 가장 가까운 좌표
// 재귀함수
#include <stdio.h>
#include <math.h>
#define N 5
typedef struct point{
	int x, y;
}POINT;
POINT origin={0, 0};
void inputPoint(POINT *p);
void outputPoint(POINT *p);
double distance(POINT *p, POINT *q);
int main(){
	POINT p[5];
	int i, mindex, min=2147000000;
	double dt;
	for(i=0; i<5; i++) inputPoint(p+i);
	for(i=1; i<5; i++) if(distance(&origin, &p[mindex])>=distance(&origin, p+i)) if((p[mindex].x+p[mindex].y)>(p[i].x+p[i].y)) mindex=i;
	printf("원점에서 가장 가까운 좌표 : ");
	outputPoint(p+min);
	return 0;
}
void inputPoint(POINT *p){
	scanf("%d %d", &p->x, &p->y);
}
void outputPoint(POINT *p){
	printf("(%4d, %4d)\n", p->x, p->y);
}
double distance(POINT *p, POINT *q){
	return sqrt(pow((q->x - p->x), 2)+pow((q->y - p->y), 2));
}

// for문
#include <stdio.h>
#include <math.h>
#define N 5
typedef struct point{
	int x, y;
}POINT;
int main() {
	int i, min=10000, mindex;
	double dt;
	POINT p[5];
	POINT origin = {0, 0};
	for(i=0; i<5; i++) scanf("%d %d", &p[i].x, &p[i].y);
	for(i=0; i<5; i++){
		dt=sqrt(pow(p[i].x-0, 2)+pow(p[i].y-0, 2));
		dt=dt+p[i].x+p[i].y;
		if(dt<=min){
			min=dt;
			mindex=i;
		}
	}
	printf("원점에서 가장 가까운 좌표 : (%4d,%5d)", p[mindex].x, p[mindex].y);
	return 0;
}
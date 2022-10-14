// 입력된 희소행렬의 행, 열 바꾼 전치행열
#include <stdio.h>
#include <stdlib.h>
#define MAX_TERMS 100
int i, j;
typedef struct{
	int row, col, value;
}element;
typedef struct{
	element data[MAX_TERMS];
	int rows, cols, terms;
}Smatrix;
Smatrix matrixTrans2(Smatrix a){
	int bi;
	Smatrix b;
	if(a.terms<=0) return b;
	b.terms=a.terms;
	b.rows=a.cols;
	b.cols=a.rows;
	bi=0;
	for(j=0; j<b.rows; j++){
		for(i=0; i<a.terms; i++){
			if(a.data[i].col==j){
				b.data[bi].col=a.data[i].row;
				b.data[bi].row=a.data[i].col;
				b.data[bi].value=a.data[i].value;
				bi++;
			}
		}
	}
    return b;
}
void matrixPrint(Smatrix a){
    for(i=0; i<a.terms; i++) printf("(%d, %d, %d)\n", a.data[i].row, a.data[i].col, a.data[i].value);
    printf("---------------------\n");
}
int main(void){
    Smatrix m, r;
    scanf("%d %d %d", &m.terms, &m.rows, &m.cols);
    for(i=0; i<m.terms; i++) scanf("%d %d %d\n", &m.data[i].row,&m.data[i].col,&m.data[i].value);
    matrixPrint(m);
    r = matrixTrans2(m);
    matrixPrint(r);
    return 0;
}

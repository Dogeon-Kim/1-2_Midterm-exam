// 메모리 동적할당 //제일 큰 값 출력
#include <stdio.h>
int maxh(int* h, int n){
	int i, max=*(h+0);
	for(i=1; i<n; i++) if(max<*(h+i)) max=*(h+i);
	return max;
}
int main(){
	int n, i;
	scanf("%d", &n);
	int* h=(int*)malloc(sizeof(int)*100);
	for(i=0; i<n; i++) scanf("%d", h+i);
	printf("%d\n", maxh(h, n)) ;
	free(h);
	return 0; 
}
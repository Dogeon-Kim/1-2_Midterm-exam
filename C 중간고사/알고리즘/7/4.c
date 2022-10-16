#include<stdio.h>
int main(){
	int n, i, a, max=-1, min=101;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &a);
		if(a>max) max=a;
		if(a<min) min=a;
	}
	printf("%d", max-min);
	return 0;
}
#include<stdio.h>
int main(){
	int n, sum=1, i;
	scanf("%d", &n);
	printf("1 ");
	for(i=2; i<n; i++){
		if(n%i==0){
			sum+=i;
			printf("+ %d ", i);
		}
	}
	printf("= %d\n", sum);
	return 0;
}
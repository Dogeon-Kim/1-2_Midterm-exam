#include <stdio.h>
int n, memo[100001]={0, 1, 2, 4, 7};
int f(int k){
    if(memo[k]) return memo[k];
    return memo[k]=(f(k-1)+f(k-2)+f(k-3))%1000;
}
int main(){
	scanf("%d", &n);
	printf("%d", f(n));
}

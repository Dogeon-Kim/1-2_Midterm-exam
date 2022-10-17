#include <stdio.h>
int memo[201]={0,1,1,2,3};
int f(int a){
	if(memo[a]) return memo[a];
	else return memo[a]=(f(a-1)+f(a-2))%10009;
}
int main(){
	int a;
	scanf("%d", &a);
	printf("%d\n", f(a));
	return 0;
}

#include <stdio.h>
int memo[201];
int f(int k){
    if(memo[k]) return memo[k];
    if(k<=2) return 1;    
    return memo[k]=(f(k-1)+f(k-2))%10009;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}
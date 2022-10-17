#include <stdio.h>
int n;
long long int f(int a){
    if(a<=2) return 1;
    return f(a-1)+f(a-2);
}
int main(){
	scanf("%d", &n);
	printf("%lld\n", f(n));
	return 0;
}
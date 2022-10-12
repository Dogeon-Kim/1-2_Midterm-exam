// 직각삼각형 별 찍기
#include <stdio.h>
char star[20];
void f(int n) {
	if(n==0) return;
	f(n-1);
	for(int i=1; i<=n; i++) printf("*");
	printf("\n");
	// star[n]='*';
	// printf("%s\n", star + 1);
} 
int main() {
	int n;
	scanf("%d", &n);
    f(n);
}

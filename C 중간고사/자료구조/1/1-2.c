// 예제1 배열의 선언과 출력
#include <stdio.h>
int main(){
	int array[5], nums[]={1,2,3,4,5};
	float values[5] = {0};
	for(int i=0; i<5; i++) printf("%d %d %.2f\n", array[i], nums[i], values[i]);
	return 0;
}

// 문제해결 (5개의 문자형 원소 입력 받아 출력)
#include <stdio.h>
int main(){
	int i; char a[10];
	for(i = 1; i <= 5; i++) scanf("%s", &a[i]);
	for(i = 5; i >= 1; i--) printf("%c", a[i]);
	return 0;
}
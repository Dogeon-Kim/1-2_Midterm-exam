// 예제1 배열의 선언과 출력
#include <stdio.h>
int main(){
	int array[5];
	int nums[] = { 1,2,3,4,5};
	float values[5] = {0};
	int i;
	for(i=0; i<5; i++){
		printf("%d %d %.2f\n", array[i], nums[i], values[i]);
	}
	return 0;
}
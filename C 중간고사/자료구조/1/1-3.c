// 문제해결 (입력 받다 0이 입력되면 역순 출력)
#include <stdio.h>
int main() {
    int a[100], i, cnt=0;
	for(i=0; i<=100 ; i++){
		scanf("%d", &a[i]);
		if(a[i]==0){
			cnt = i-1;
			break;
		}
	}
	for(i=cnt; i>=0; i--) printf("%d ", a[i]);
	return 0;
}

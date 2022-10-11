// 배열에서 문자 찾기
#include <stdio.h>
int main(){
	char alpha[6] = { 'H', 'E', 'L', 'L', 'O', '!'}, c;
	printf("찾고 싶은 문자 : ");
	scanf("%c", &c);
	for(int i=0; alpha[i]!='\0'; i++) if(alpha[i] == c) printf("%d번째\n", i+1);
	return 0;
}
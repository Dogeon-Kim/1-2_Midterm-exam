// starlen fuction
#include <stdio.h>
int myStrlen( char* str);
int myStrlen2( char* str);
int main() {
	char s[100];
	scanf("%s", s);
	printf("%d\n %d\n", myStrlen(s), myStrlen2(s));
	return 0;
}
int myStrlen( char* str){
	int cnt=0, i;
	for(i=0; *(str+i)!='\0'; i++) cnt+=1;
	return cnt;
}
int myStrlen2( char* str){
	int cnt=0, i;
	for(i=0; *(str+i)!='\0'; i++) if(str[i]>='0' && str[i]<='9') cnt+=1;
	return cnt;
}
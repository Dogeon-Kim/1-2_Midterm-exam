// 찾는 문자 위치
#include <stdio.h>
#include <string.h>
int main(){
  char a[10], n;
  int len, i, p;
  scanf("%s %c", a, &n);
  len=strlen(a);
  for(i=0; i<len; i ++){
    if(a[i]==n){
			p = i;
			break;
		}
  }
  if( p != -1 ) printf("%d번째\n", p+1);
  else printf("not found\n");
  return 0;
}
// 부분문자열 // 입력값 포함 사이 수 출력
#include <stdio.h>
int main(){
  int a,b;
  char* str=(char*)malloc(100);//char str[100]의 의미(sizeof(char)*)
  scanf("%s",str);
  scanf("%d %d",&a,&b);
  // for(i=a-1; i<b; i++) printf("%c", str[i]);
  str[b] ='\0';
  printf("%s", str+a-1);
  return 0;
}

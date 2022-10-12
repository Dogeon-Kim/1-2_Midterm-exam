// 한 단어의 한 문자 개수 출력
#include <stdio.h>
#include <string.h>
int main() {
   char s[1000001];
   int a[100] = {0,};
   int t = 0;
   int i;
   scanf("%s", s);
   for( i = 0; s[i]!='\0'; i++){
      //printf("%c", s[i]);
      t = s[i]-0; // t = 65
      a[t]++;
   }
   for( i= 65; i<=90; i++){// 'A', 'Z'
      if(a[i]>0) printf("%c : %d\n", i, a[i]);
   }
   return 0;
}
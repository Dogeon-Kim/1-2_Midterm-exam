// 문자열과 포인터 문제
#include <stdio.h>
main(){
   char a[] ={'A', 'B','C','D','E','F'};
   char* p;
   p = &a[2];
   printf("%c, %c\n", *p, *(p-2));
}

// 포인터 이용 swap 함수 문제
// *a=*b
void swap(int* a, int* b){
   int temp;
   temp = *a;
   (           )  
   *b = temp;
}
int main(){
  int a=10, b=20;
  swap(&a, &b);
  return 0;
}

// 포인터 변수 문제
int a = 5, b, *c;
c = &a;
b= ++*c;
printf("%d",b);

// 포인터 변수 문제
int a=10, *b;
b=&a;
for(int i=0;i<5;i++)
   *b += i;
printf("%d",*b);

// 포이터 변수 문제
int a = 31,b, *c,*d;
c = &a;
d = &b;
*d= --*c %3 ?a+a:a*a;
//a = a-1
//if(a % 3 == 1) b=a+a;
//else if(a % 3 == 0) a*a;
printf("%d",*d);

// 포인터 변수 문제
int a=5, b=7,c,*d;
d = &c;
*d = a & b; //(5 AND 7 =>  0101 & 0111 => 0101)
printf("%d",c);
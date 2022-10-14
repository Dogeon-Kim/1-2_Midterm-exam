// 구조체 포인터
#include<stdio.h>
#include<string.h>
typedef struct Person{
    char name[10];
    int age;
}PERSON;
int main(){
    PERSON* p=malloc(sizeof(PERSON));
    scanf("%s", p->name );
    scanf("%d", &p->age );
    printf("%s, %d\n", p->name, p->age);
    free(p);
    return 0;
}

// 구조체 포인터 역참조
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char c1;
	int *numPtr; // 포인터
}Data;
int main(){
	int num1=10;
	Data d1; // 구조체 변수
	Data *d2=(Data*)malloc(sizeof(Data)); // 구조체 포인터에 메모리 할당
	d1.numPtr=&num1;
	d2->numPtr=&num1;
	printf("%d\n", *d1.numPtr); // 10: 구조체의 멤버를 역참조
	printf("%d\n", *d2->numPtr); // 10: 구조체 포인터의 멤버를 역참조
	d2->c1='a';
	printf("%c\n", (*d2).c1); //  a: 구조체 포인터를 역참조하여 c1에 접근 // d2->c1과 같음
	printf("%d\n", *(*d2).numPtr); // 10: 구조체 포인터를 역참조하여 numPtr에 접근한 뒤 다시 역참조 // *d2->numPtr과 같음
	free(d2);
	return 0;
}

// 구조체의 멤버변수 역참조 출력
#include <stdio.h>
#include <stdlib.h>
typedef struct {
	char name[20];
	int* p;
}data;
int main(){
	int n = 50;
	data d1;
	data* d2 = (data*)malloc(sizeof(data));
	d1.p = &n;
	d2->p = &n;
	printf("%d\n", *d1.p + *d2->p);
	strcpy(d2->name,"bobby");
	printf("%s\n",(*d2).name);
	printf("%d\n",*(*d2).p);
	free(d2);
	return 0;
}
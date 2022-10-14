// 구조체 정의하고 이름 나이 출력
#include<stdio.h>
#include<string.h>
#define NUM 3
typedef struct Person{
	char name[10];
	int age;
}PERSON;
void inputData(PERSON *p);
void outputData(PERSON *p);
int i;
int main(){
	PERSON p[3];
	inputData(p);
	outputData(p);
	return 0;
}
void inputData(PERSON p[]){
	for(i=0; i<3; i++) scanf("%s %d", p[i].name, &p[i].age);
}
void outputData(PERSON p[]){
	for(i=0; i<3; i++) printf("%s, %d\n", p[i].name, p[i].age);
} 
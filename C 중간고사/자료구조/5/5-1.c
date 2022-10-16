// 스택을 스택 구조체 변수로 정의
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_STACK_SIZE 100
typedef int element; //int를 element로 재정의
typedef struct{
	element data[MAX_STACK_SIZE];
	int top;
}Stack;
Stack s;
bool isEmpty(){
	if(s.top==-1) return 1;
	else return 0;
}
bool isFull(){
	if(s.top==MAX_STACK_SIZE-1) return 1;
	else return 0;
}	 
void push(element item){
	s.top+=1;
	s.data[s.top]=item;
}
element pop(){ //반환후 제거
	element temp=s.data[s.top];
	s.data[s.top]-=1;
	return temp;
}
element peek(){//반환만
	element temp=s.data[s.top];
	return temp;
}
int main(){
	s.top = -1;
	push(1);
	push(2);
	push(3);
	printf("%d\n", pop());
	printf("%d\n", peek());
	printf("%d\n", pop());
	return 0;
}
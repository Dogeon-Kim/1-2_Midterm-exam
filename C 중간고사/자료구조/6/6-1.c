// 큐의 기본연산(추상데이터 타입(ADT)) 
#include <stdio.h>
#include <stdlib.h>
#define MAX_Q_SIZE 5
typedef int element;
typedef struct{
	int front, rear;
	element data[MAX_Q_SIZE];
}Queue;
void error(char* message){
	printf("%s\n",message);
	exit(0); // 메인함수 종료
}
void initQueue(Queue* q){
	q->front=-1;
	q->rear=-1;
}
int isFull(Queue* q){ //if(q->rear==MAX_Q_SIZE-1) return 1;
	return q->rear==MAX_Q_SIZE-1;
}
int isEmpty(Queue* q){
	return q->rear==q->front;
}
void enQueue(Queue* q,element item){
	if(isFull(q)) error("Queue is Full\n");
	q->rear++;
	q->data[q->rear]=item;
}
element deQueue(Queue* q){
	if(isEmpty(q)) error("Queue is Empty\n");
	q->front++;
	return q->data[q->front];
}

void queuePrint(Queue* q){
	for(int i=0; i<MAX_Q_SIZE; i++){
		if (i <= q->front || i > q->rear) printf(" | ");
		else printf("%d | ", q->data[i]);
	printf("\n");
}
int main() {
	element item = 0;
	Queue q;
	initQueue(&q);
	enQueue(&q,10); queuePrint(&q);
	enQueue(&q,20); queuePrint(&q);
	enQueue(&q,30); queuePrint(&q);
	item=deQueue(&q); queuePrint(&q);
	item=deQueue(&q); queuePrint(&q);
	return 0;
}
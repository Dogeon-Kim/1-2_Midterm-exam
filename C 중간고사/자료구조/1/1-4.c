// 문제해결 (index location input and delete)
#include <stdio.h>
void inputArray( int a[], int size);
void outputArray( int a[], int size);
int insertArray( int a[], int num, int index, int size);
int deleteArray( int a[], int index, int size);
int i;
int main(){
	int a[10], size=0 ;
	size = insertArray( a, 10, 0, size);
	size = insertArray( a, 20, 1, size);
	size = insertArray( a, 30, 2, size);
	size = insertArray( a, 50, 2, size);
	outputArray(a,size);
	size = deleteArray(a, 1, size);
	outputArray(a, size);
	return 0;
}
void inputArray( int a[], int size){
	for(int i=0;i<size;i++) scanf("%d",&a[i]);
}
void outputArray( int a[], int size){
	for(int i=0;i<size;i++) printf("%d ",a[i]);
	printf("\n");
}
int insertArray( int a[], int num, int index, int size){
	if(index==size){
		a[index]=num;
		size++;
	}
	else{
		for(i=size; i>index; i--) a[i]=a[i-1];
		a[i]=num;
		size++;
	}
	return size;
}
int deleteArray( int a[], int index, int size){
	if(index==size-1){
		a[index]=0;
		size--;
	}
	else{ 
		for(i=index; i<size; i++) a[i]=a[i+1];
		size--;
	}
	return size;
}
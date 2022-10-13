// 2차원 배열을 가리키는  배열 포인터 지정
#include <stdio.h>
int main(){
    int arr[3][4] = {{ 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 }};//3행, 4열의 int형 2차원 배열 선언
	//2차원 배열의 시작 주소를 가리키는 포인트 선언 및 할당 및 출력
    int(*arrPtr)[4]=arr;
    printf("%p\n", *arrPtr);
    printf("%p\n", *arr);
    printf("%d\n", arrPtr[2][1]);
    return 0;
}

// 포인터 표기 방식 주소 접근
include <assert.h>
int main(){
    int a[3][2]={{11, 22}, {33, 44}, {55, 66}}, (*p)[2]=a;
    assert(&a[0][0]==*p);
    printf("%8x , %8x\n", &a[0][0], *(p+0)+0);
    printf("%8x , %8x\n", &a[0][1], *(p+0)+1);
    printf("%8x , %8x\n", &a[1][0], *(p+1)+0);
    printf("%8x , %8x\n", &a[1][1], *(p+1)+1);
    printf("%8x , %8x\n", &a[2][0], *(p+2)+0);
    printf("%8x , %8x\n", &a[0][1], *(p+2)+1);
    printf("%8d", &a[1][0]-&a[0][0]);
    return 0;
}

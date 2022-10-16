// 순환호출 함수에서 틀린점
int recursive(int n){
    if(n==1) return 0;
    return n*recursive(n);
}

// 순환호출 함수에서 틀린점
int recursive(int n){
    printf("recursive(%d)\n", n);
    return n*recursive(n-1);
}

// sum(5) 호출 시 내용과 반환값
int sum(int n){
    printf("%d\n", n);
    if(n<1) return 1;
    else return(n+sum(n-1));
}

// recursive(5) 호출 시 내용과 반환값
int recursive(int n){
    printf("%d\n", n);
    if(n<1) retrun 2;
    else return(2*recursive(n-1)+1);
}

// recursive(10) 호출 시 내용과 반환값
int recursive(int n){
    printf("%d\n", n);
    if(n<1) retrun -1;
    else return(recursive(n-3)+1);
}

// recursive(5) 호출 시
int recursive(int n){
    if(n!=1) recursive(n-1);
    printf("%d\n", n);
}

// asterisk(5) 호출 시 *갯수
void asterisk(int i){
    if(a>1){
        asterisk(i/2);
        asterisk(i/2);
    }
    printf("*");
}
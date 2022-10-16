// 1 (120)
#include <stdio.h>
int f(int a){
    if(a==1) return 1;
    else return a*f(a-1);
}
int main(){
    int a=5;
    printf("%d", f(a));
    return 0;
}

// 2 (8)
#include <stdio.h>
int f(int a){
    if(a==1) return 1;
    if(a==0) return 1;
    return f(a-1)+f(a-2);
}
int main(){
    int a=5;
    printf("%d", f(a));
    return 0;
}
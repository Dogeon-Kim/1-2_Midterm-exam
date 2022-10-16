// 2 (O(n^2))
#include <stdio.h>
int main(){
    int n=0, a=1, i;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++) pirntf("%d ", j);
        printf("%d ", i);
    }
    return 0;
}
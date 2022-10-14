// 2차원 순서 대로 출력
#include <stdio.h>
int main(){
    int i, j, num=1, a[3][3]={0};
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            a[i][j]=num;
            printf("%d ", a[i][j]);
            num+=1;
        }
        printf("\n");
    }
    return 0;
}

// 2차원 배열 꼬불할게 출력
#include <stdio.h>
int main(){
    int a[101][101], n, x = 1, i, j;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(i%2==1){
            for(j=1; j<=n; j++){
                a[i][j]=x;
                x++;
            }
        }
        else{
            for(j=n; j>=1; j--){
                a[i][j] = x;
                x++;
            }
        }
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++) printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
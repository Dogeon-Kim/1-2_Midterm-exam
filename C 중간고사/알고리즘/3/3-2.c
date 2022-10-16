// 오름차순 선택정렬
#include <stdio.h>
int main(){
    int i, j, n=4, k, temp;
    int list[4]={4, 5, 1, 2};
    for(i=0; i<n; i++){
        k=i;
        for(j=i+1; j<n; j++) if(list[j]<list[k]) k=j;
        temp=list[i];
        list[i]=list[k];
        list[k]=temp;
    }
    for(i=0; i<n; i++) printf("%d ", list[i]);
    return 0;
}

// 오름차순 버블정렬
#include <stdio.h>
int main(){
    int i, j, n=4, temp;
    int list[4]={4, 5, 1, 2};
    for(i=n-1; i>0; i--){
        for(j=0; j<i; j++){
            if(list[j]>list[j+1]){
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++) printf("%d ", list[i]);
    return 0;
}

// 오름차순 삽입정렬
#include <stdio.h>
int main(){
    int i, j, n=4, temp, key;
    int list[4]={4, 5, 1, 2};
    for(i=1; i<n; i++){
        key=list[i];
        for(j=i-1; j>=0 && list[j]>key; j--) list[j+1]=list[j];
        list[j+1]=key;
    }
    for(i=0; i<n; i++) printf("%d ", list[i]);
    return 0;
}
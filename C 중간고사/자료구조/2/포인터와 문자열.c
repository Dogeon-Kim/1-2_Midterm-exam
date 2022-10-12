// 예제1
#include <stdio.h>
size_t myStrlen(const char* str);
int main(void){
    chars[]="hello";
    printf("%d\n", myStrlen(s));
    return 0;
}
size_t myStrlen(const char* str){
    char* s;
    for(s=str; *s; s++) printf("%8X\n", s);
    printf("%8X\n", s);
    printf("s=%8X, str=%8X\n", s, str);
    return s-str;
}

// 예제2
#include <stdio.h>
int main(){
    char* s="world"; int i;
    printf("%08X %08X %08X %s \n", &s, s, &s[0], s);
    for(i=0; s[i]!='\0'; i++) printf("%08X %c\n", &s[i], s[i]);
}

// 예제3
#include <stdio.h>
void outputArray(int* p, int n);
int main(){
    int array[3]={10, 20, 30};
    int size=sizeof(array)/sizeof(array[0]);
    outputArray(array, size);
}
void outputArray(int* p, int n){
    for(int i=0; i<n; i++) printf("%d %d\n", p[i], *(p+i));
}
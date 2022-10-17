#include <stdio.h>
int n;
void f(int k){
   if(k<=0) return;  
   f(k-1);
   printf("%d ", k);
}
int main(){
   scanf("%d", &n);
   f(n);
   printf("\n"); 
   return 0;
}

#include <stdio.h>
int n;
int f(int k){ 
   if(k<=1) return 1; 
   return f(k-1)+k;
}
int main() {
   scanf("%d", &n);
   printf("%d", f(n));
   return 0;
}

#include <stdio.h>
int n;
int f(int k){
   if(k>n) return 0;
   return f(k+1)+k;
}
int main(){
   scanf("%d", &n);
   printf("%d", f(0));
   return 0;
}

#include <stdio.h>
int n;
int f(int k){
   if(k == n) return k;
   return f(k+1)+k;
}
int main(){
   scanf("%d", &n);
   printf("%d", f(1));
   return 0;
}
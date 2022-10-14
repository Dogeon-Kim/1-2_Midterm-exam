// 한정판 출력
#include <stdio.h>
#include <stdbool.h>
typedef struct Goods{
	char name[100];
	int price;
	bool limit;
}Goods;
int main(){
	Goods* item=1;
	Goods item1={"교향곡 전집", 100000, false};
	Goods* ptr; // ①____________________
	ptr=&item1; // ②____________________
	ptr->limit=true;
	if (ptr->limit==true) printf("한정판\n");
	else printf("일반판\n");
	return 0;
}

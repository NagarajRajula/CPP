#include<stdlib.h>
int main(){
	int a=01,i=0;
	int *p;
	p=&a;
	printf("address%u",*p);
	int ar[4]={1,2,3};
	int *p1=ar;
	for(i=0;i<4;i++){
		printf("%d\t",*p1);
		p1++;
	}
}

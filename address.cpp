#include<stdio.h>
int main(){
	int x=10;
	int *ptr;
	printf("%d\n",x); 
	ptr=&x;
	printf("%d",*ptr);
}

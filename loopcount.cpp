#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int i,j,k,count=0;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			for(k=0;k<5;k++){
				count++;
			}
		}
	}
	cout<<count;
}

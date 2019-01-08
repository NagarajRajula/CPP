#include<iostream>
#include<algorithm>
using namespace std;
void sort(int*,int);
void swap(int*,int*);
int main(){
	int ar[100],n;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>ar[i];}
	sort(ar,n);
	
	for(int i=0;i<n-1;i+=2){
	swap(&ar[i],&ar[i+1]);
	}
	
	for(int i=0;i<n;i++){cout<<ar[i]<<"\t";
	}
}
void sort(int ar[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++){
			if(ar[i]>ar[j]){
				int temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
		//for(int i=0;i<n;i++){cout<<ar[i]<<"\t";
	
}
void swap(int *x,int *y){
	int i=0,temp=*x;
	*x=*y;
	*y=temp;
	//cout<<i;
	i++;
}


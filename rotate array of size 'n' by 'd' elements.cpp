#include<iostream>
using namespace std;
int main(){
	int ar[100],n,d;
	cout<<"enter lenth and d-value:";
	cin>>n>>d;
	int c=n;
	cout<<"enter elements into array:";
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	for(int i=0;i<d;i++){
		int temp=0;
		temp=ar[i];
		ar[i]=ar[n-1];
		ar[n-1]=temp;
		n--;
	}
	for(int i=0;i<c;i++){
		cout<<ar[i]<<"\t";
	}
}

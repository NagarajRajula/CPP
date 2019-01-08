#include<iostream>
using namespace std;
int main(){
	int ar[100],n;
	cout<<"array size:";
	cin>>n;
	int temp=n;
	cout<<"enter elements:";
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	for(int i=0;i<n;i++){
		int temp=ar[i];
		ar[i]=ar[n-1];
		ar[n-1]=temp;
		n--;
	}
	cout<<"After reversing list is: ";
	for(int i=0;i<temp;i++){
		cout<<ar[i]<<"\t";
	}
}

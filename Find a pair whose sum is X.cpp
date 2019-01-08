#include<iostream>
using namespace std;
int main(){
	int x,ar[10],n;
	cout<<"enter x value:";
	cin>>x;
	cout<<"Enter array length: ";
	cin>>n;
	cout<<"enter elements :";
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	for(int i=0;i<n/2;i++){
		for(int j=0;j<n;j++){
			int temp=ar[j]+ar[i];
			if(temp==x){
				cout<<"We got a pair: "<<ar[i]<<"\t"<<ar[j]<<endl;
			}
		}
	}
}

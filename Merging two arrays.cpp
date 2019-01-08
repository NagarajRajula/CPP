#include<iostream>
using namespace std;
int main(){
	int ar[100],ar2[100],n,m;
	
	cout<<"enter lenths of arrays :";
	cin>>m>>n;
	cout<<"enter elements into array-1:";
	for(int i=0;i<m;i++){
		cin>>ar[i];
	}
	cout<<"enter elements into array-2:";
	for(int i=0;i<n;i++){
		cin>>ar2[i];
	}
	for(int i=0;i<n;i++){
		ar[m+i]=ar2[i];
	}
	for(int i=0;i<m+n;i++){
		cout<<ar[i]<<"\t";
	}
}


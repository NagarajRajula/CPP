#include<iostream>
using namespace std;
int main(){
	int ar[100],n,ar2[10],k=0,sum=0;
	cout<<"enter array length:";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	for(int i=0;i<n/2;i++)
	{
		ar2[k]=ar[i]-ar[i+1];
		k++;
	}
	for(int i=0;ar2[i]!=NULL;i++){
		sum+=ar2[i];
	}
	cout<<"sum is:"<<sum;
}

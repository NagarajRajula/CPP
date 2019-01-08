#include<iostream>
using namespace std;
int main(){
	int ar[100],n,max=0;
	cout<<"enter array length:";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++)
		//if(i==j){continue;
		//}
		//else
		{
			int sum=0;
			sum=ar[i]+ar[j];
			if(sum>max){
				max=sum;
				ar[n]=max;
			}
		}
	}
	for(int i=0;i<n+1;i++){cout<<ar[i]<<"\t";
	}
}

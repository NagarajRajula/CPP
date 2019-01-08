#include<iostream>
using namespace std;
int main(){
	int ar[100],n;
	cout<<"enter array length:";
	cin>>n;
	cout<<"Enter values into array:";
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				if((ar[i]+ar[j])>ar[k]){
					cout<<"Traingle are:"<<ar[i]<<ar[j]<<ar[k]<<endl;
				}
			}
		}
	}
}

#include<iostream>
using namespace std;
int main(){
	int ar[100],ar2[100],n,m;
	
	cout<<"enter lenth of array :";
	cin>>n;
	cout<<"enter elements into array:";
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	for(int i=0;i<n/2;i++){
		for(int j=i+1;j<n;j++){
			if(ar[i]==ar[j]){
				cout<<"repeating element is: "<<ar[i]<<endl;
			}
		}
	}
}

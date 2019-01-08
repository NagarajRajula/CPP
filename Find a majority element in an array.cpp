#include<iostream>
using namespace std;
int main(){
	int ar[100],n,max=0,temp;
	cout<<"array size:";
	cin>>n;
	cout<<"enter elements:";
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=0;j<n;j++){
			if(ar[i]==ar[j]){
					
					count++;}
			}
			if(count>max){
				max=count;
				temp=i;
			}
		}
		cout<<"Majority element in an array is: "<<ar[temp];
}

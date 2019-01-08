#include<iostream>
using namespace std;
void sort1(int*,int);
int main(){
	int ar1[100],ar2[100],ar3[100],n,m,o;
	cout<<"Enter size of array:";
	cin>>n>>m>>o;
	cout<<"Enter values into arrays:";
	for(int i=0;i<n;i++){
		cin>>ar1[i];
	}
	for(int i=0;i<m;i++){
		cin>>ar2[i];
	}
	for(int i=0;i<o;i++){
		cin>>ar3[i];
	}
	sort1(ar1,n);
	sort1(ar2,m);
	sort1(ar3,o);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(ar1[i]==ar2[j]){
				for(int k=0;k<o;k++){
					if(ar1[i]==ar3[k]){
						cout<<"common elements are found:"<<ar1[i]<<ar2[j]<<ar3[k];
					}
				}
			}
		}
	}
}
 void sort1(int ar[],int n){
 	for(int i=0;i<n;i++){
 		for(int j=0;j<n;j++){
 			if(ar[i]<ar[j]){
 				int temp=ar[i];
 				ar[i]=ar[j];
 				ar[j]=temp;
			 }
		 }
	 }
 cout<<"Sorted array is:"<<endl;
 for(int i=0;i<n;i++){
 	cout<<ar[i]<<"  ";
 } }


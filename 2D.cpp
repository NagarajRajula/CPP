#include<iostream>
using namespace std;
int main(){
	
	int ar[10][10],ar2[10][10],c=0,r=0;
	cout<<"Enter col and row:";
	cin>>c>>r;
	int r1=0;
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			cin>>ar[i][j];
		}
	}
	for(int i=0;i<c;i++){
		int c2=c;
		for(int j=0;j<r;j++){
			int temp=ar[i][j];
			ar2[c2][r1]=temp;
			
			c2--;
		}
		r1++;
	}

for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			cout<<ar2[i][j]<<"\t";
		}
	cout<<endl;
	}
}

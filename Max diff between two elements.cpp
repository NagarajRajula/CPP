#include<iostream>
using namespace std;
int main(){
	int ar[100],n,max=0,min,diff;
	cout<<"Enter length:";
	cin>>n;
	cout<<"enter elements into array:";
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(ar[i]>ar[j]){
			}
			else if(ar[i]>max){
				max=ar[i];
			}
		}
}
cout<<"max is:"<<max<<endl;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(ar[i]<ar[j]){
			}
			else if(ar[i]<min){
				min=ar[i];
			}
		}
}
cout<<"min is: "<<min<<endl;
diff=max-min;
cout<<"Difference btwn max and min is: "<<diff;
}

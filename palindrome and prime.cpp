#include<iostream>
using namespace std;
int main()
{
	int n,count=0,temp=0,r=0,rev=0;
	cin>>n;
	temp=n;
	int temp1=n;
	for(int i=2;i<n-1;i++)
	{
		if(n%i==0){
			count++;
			//cout<<i<<endl;
		}	
	}
	//cout<<count<<endl;

	
	if(count==0){
		while(temp!=0)
		{
			r=temp%10;
			rev=rev*10+r;
			temp=temp/10;
		}
		 if(rev==temp1){
			cout<<"palindrome and prime number: "<<temp1;
		}
	}
}

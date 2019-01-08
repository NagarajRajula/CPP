#include<iostream>
using namespace std;

int main()
{
	int k=0,l=0,m;
	string n,e,o;
	cout<<"enter no.of strings:";
	cin>>m;
	for(int s=0;s<=m;s++)
	{
		cin>>n[s];
	}
	for(int i=0;n[i]!=NULL;i++)
	{
		
	if(i%2==0)
	{	
		e[k]=n[i];
		k++;
	}
	else
	{
		o[l]=n[i];
		l++;
	}

  }
  
	for(int j=0;e[j]!=NULL;j++)
	{
		cout<<e[j];	
	}
	cout<<" ";
	for(int p=0;o[p]!=NULL;p++)
  {
  	cout<<o[p];
  }

}
	

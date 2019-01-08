#include<iostream>
using namespace std;
void func(string);
int main()
{
	int k=0,l=0,m;
	string n,a[10];
    cin>>m;
    for(int p=0;p<m;p++)
    {
        cin>>a[p];
    }
    for(int p=0;p<m;p++)
    {
        func(a[p]);
        cout<<endl;
    }}
void func(string n)
{
        string e,o;
    int k=0,l=0;
    for(int i=0;n[i]!=NULL;i++)
    {
	if(i%2==0){	
		e[k]=n[i];
		k++;
	}
	else
	{	o[l]=n[i];
		l++;}}
	for(int j=0;e[j]!=NULL;j++)
	{
		cout<<e[j];	
	}
	cout<<" ";
	for(int p=0;o[p]!=NULL;p++)
  {
  	cout<<o[p];
    }}

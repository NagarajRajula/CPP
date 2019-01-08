#include<iostream>
#include<cstring>
using namespace std;
void func(string);
int main()
{
	int m;
	string n;
	
    cin>>m;
    for(int i=0;i<m;i++)
    {
    	cin>>n[i];
	}
	for(int j=0;j<m;j++)
	{
		func(n[j]);
	}
    void func(string a)
	{
	
	    //for(int p=0;p<m;p++)
	    /{
	        //char* a;
	        //a=new char(90);
	        //cin>>a;
	        for(int i=0;a[i]!='\0';i+=2)
	            cout<<a[i];
	        cout<<" ";
	        for(int i=1;a[i]!='\0';i+=2)
	            cout<<a[i];
	        cout<<endl;
	        delete[] a;
	    /}
  	//return 0;
    }

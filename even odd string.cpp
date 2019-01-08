#include<iostream>
using namespace std;

int main()
{
	int i,j,k,l;
	char s[100],e[100],o[100];
	cin>>s;
	for(i=0;s[i]!='\0';i+2)
	{
		e[k]=s[i];
		k++;
	}
	for(j=1;s[j]!='\0';j+2)
	{
		o[l]=s[j];
		l++;
	}
	cout<<e<<"  "<<o;
}


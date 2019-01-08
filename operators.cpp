#include <iostream>
#include<math.h>
using namespace std;

int main() {
	
	int tip,tax;
	float tc,c,tax1,tip1;
	
	cin>>c>>tip>>tax;
	
	tip1=c*((float)tip/100);
	tax1=c*((float)tax/100);
	 
	 //cout<<tip1;
	 
	 
	tc=tip1+tax1+c;
	
	cout<<ce(tc);
}
	
	
	

#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	node *next,*prev;
	int data;
};
class dll{
	node *first;
	public:
		dll(){
			first=NULL;
			}
	void create();
	void display();
};
void dll::create(){
	node *temp,*s;
	s=new node;
	int n;
	cout<<"\nenter data:";
	cin>>n;
	temp->data=n;
	//temp->next=NULL;	
	if(first==NULL)
		temp->prev=NULL;
		first=temp;
	
	if(first!=NULL)
		{
		s=first;
			while(s->next!=first)
				s=s->next;
		s->next=temp;
		temp->prev=s;

	}
	//last->next=NULL; 	
}
void dll::display(){
	if(first==NULL){
		cout<<"nothing to show:";
	}
	node *temp=new node;
	temp=first;
	while(temp!=NULL)
	{
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
}
int main(){
	dll d;
	int n;
	while(1){
	cout<<"\n1.create\n2.display\n3.exit\nenter your choice:";
	cin>>n;
	switch(n){
		case 1:
			d.create();
			break;
		case 2:
			d.display();
			break;
		case 3:
			exit(1);		
	}
}}

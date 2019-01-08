#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	node *next;
};
class cir:node{
	node *first,*last;
	public:
		cir(){
		//first=NULL;
		last=NULL;
		}
	void create();
	void display();
};
void cir::create(){
	int n;
	cout<<"\nenter data :";
	cin>>n;
	node *temp;
	temp->data=n;
	if (last == NULL)
    {
        last = temp;
        temp->next = last;   
    }
    else
    {
        temp->next = last->next; 
        last->next = temp;
        last = temp;
    }
	/*cur->data=n;
	//cur->next=first;
	if(first!=NULL){
		while(temp->next!=first)	
			temp=temp->next;
		temp->next=cur;	
		cur->next=first;
		//cout<<"inserted data"<<cur->data;
	}
	else{
		first=cur;
		cur->next=first ;
	}*/
}
void cir::display(){
struct node *s;
    if (last == NULL)
    {
        cout<<"List is empty, nothing to display"<<endl;
        return;
    }
    s = last->next;
    cout<<"Circular Link List: "<<endl;
    while (s != last)
    {
        cout<<s->data<<"->";
        s = s->next;
    }
    cout<<s->data<<endl;
	/*while(first!=last){
		cout<<temp->data<<"hai";
		temp=temp->next;
	}
	/*
	//n=last->next;
	if(first!=NULL){
		do{
			cout<<temp->data<<"hai";
		temp=temp->next;
	}while(temp!=first);
	}*/
	//else
	//cout<<"list empty:";
}
int main(){
	cir c;
	int n;
	while(1){
	cout<<"\n1.for create\n2.for display\n3.for exit\nEnter your choice:";
	cin>>n;
	switch(n){
		case 1:
			c.create();
			break;
		case 2:
			c.display();
			break;
		case 3:
			return 0;		
	}
}
}

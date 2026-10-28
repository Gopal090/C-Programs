#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node* next;
		node* prev;
	 
	 node(int d)
	  {
	  	data=d;
	  	next=prev=NULL;
	  }
	  ~node()
	   {
	   	int val=data;
	   	if(next!=NULL)
	   	  {
	   	  	next=NULL;
		  }
		if(prev!=NULL)
	   	  {
	   	  	prev=NULL;
		  }
		  
		  cout<<"\nDeleted value :- "<<val;
	   }
	   
};

node* head=NULL;
void insertatfirst(node* &head,int d)
 {
 	node* newnode=new node(d);
 	if(head==NULL)
 	 head=newnode;
 	
 	else
 	 {
 	 	newnode->next=head;
		head->prev=newnode;
		head=newnode; 
	 }	
 }
void min_max(node* &head)
 {
 	node* temp=head;
 	int min,max;
 	min=max=temp->data;
 	temp=temp->next;
 	while(temp!=NULL)
 	 {
       if(temp->data>max)
	    max= temp->data;
	   
	   if(temp->data < min)
	     min = temp->data;
		 	 	
     }
     
     cout<<"\nMax value:- "<<max;
     cout<<"\nMin value:- "<<min;
     
 }
void insertatend(node* &head, int d)
 {
 	node* newnode=new node(d);
 	if(head==NULL)
 	 head=newnode;
 	 
 	else
 	{
 	  node * temp=head;
 	  while(temp->next!=NULL)
 	    temp=temp->next;
 	
 	  temp->next=newnode;
 	  newnode->prev=temp; 
		
    }
 }
 
void print(node* head)
 {
 	 
 	   cout<<endl;
 	   while(head)
 	     {
 	 	   cout<<head->data<<"->";
 	 	   head=head->next;
	     }
	  
	 
 }
 
void deletenode(node* &head, int pos)
 {
 	int cnt=1;
 	if(head==NULL)
 	 cout<<"\n Underflow...";
 	node* temp=head;
 	if(pos==1)
 	 {
 	 	head=head->next;
 	 	if(head!=NULL)
 	 	 head->prev=NULL;
 	 	
 	 	delete temp;
 	 	return;
	 }
	
	while(cnt<pos-1)
	 {
	   temp=temp->next;
	   cnt++; 	
	 }
	 
	 
	 node* p=temp->next;
	 if(p->next==NULL)
	  {
	  	temp->next=p->next;
	  	delete p;
	  }
	 temp->next=p->next;
	 p->next->prev=temp;
	 delete p;
	 
 }

 int main()
  {
  	insertatend(head,1);
  	insertatend(head,2);
  	insertatend(head,3);
  	insertatfirst(head,4);
  	insertatfirst(head,5);
  	insertatfirst(head,6);

  	print(head);
  	min_max(head);
  	
	return 0;
  }
 
 
 
 
 
 

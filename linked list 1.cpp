#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *next;
		
		node(int d)
		 {
		 	this->data=d;
		 	this->next=NULL;
		 }
		 
		 ~node()
		 {
		 	 int val=data;
		 	 if(next!=NULL)
		 	 { 
		 	   delete next;
		 	   next=NULL;
		     }
		     cout<<"\n Value Deleted :- "<<val;
		 	
		 }
};
node * head=NULL;
node * tail=NULL;
void insertathead(node* &head,node* &tail,int d)
 {
    node* newnode=new node(d);
 	if(head==NULL)
 	{
      head=newnode;
	  tail=newnode;		
    }
 	  
 	else
 	 {
 	 	newnode->next=head;
		head=newnode; 
	 }
 }
 
void  insertattail(node* &head, int d)
 {
   node* newnode=new node(d);
 	if(tail==NULL)
 	{
      head=newnode;
	  tail=newnode;		
    }
    else
    {
    	 tail->next=newnode;
    	 tail=newnode;
	} 
}
void print(node* head)
 {
 	 node* temp=head;
 	 while(temp!=NULL)
 	  {
 	     cout<<temp->data<<"->";
		 temp=temp->next; 	
	  }
 }

void deletenode(node* &head,node* &tail, int position)
 {
 	 int cnt=1;
 	 node* temp=head;
 	 if(head==NULL)
 	   cout<<"\n Underflow...";
 	
 	 else if(position==1)
 	  {
		 head=head->next;
		 delete temp;
		 return; 
	  }
	 else
	  {
	  	 while(cnt<position-1)
	  	  {
	  	  	temp=temp->next;
			cnt++; 
		  }
		  node* p=temp->next;
		  if(p==tail)
		   {
		   	tail=temp;
		   }
		temp->next=p->next;
	    delete p;
		   
	  }
 }
 
void max_min(node* &head)
 {
 	 node* temp=head;
 	 if(head==NULL)
 	  return ;
 	
 	 int max,min;
 	 max=min=temp->data;
 	 temp=temp->next;
 	 while(temp!=NULL)
 	  {
 	    if(temp->data > max)
		  max=temp->data;
		else if(temp->data < min)	
 	  	  min =temp->data;
 	  	  
 	  	temp=temp->next;
	  }
	  cout<<"\n Max Element in list :- "<<max;
	  cout<<"\n Min Element in list :- "<<min;
	  
 }
 
int getlength(node * temp)
 {
 	int count=0;
 	while(temp)
 	 {
 	 	count++;
		temp=temp->next;  
 	 	  
	 }
	 return count;
 }

int main()
 {
 	
 	insertathead(head,tail,3);
 	insertattail(head,10);
 	insertathead(head,tail,4);
 	insertathead(head,tail,5);
 	insertathead(head,tail,7);
 	
 	print(head);
 	
 	cout<<endl<<getlength(head);
 	max_min(head);
 	
 	
 	return 0;
 	
 	
 	
 	
 	
 	
 }

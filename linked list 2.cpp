#include<iostream>
using namespace std;
class node
{
   public:
   	 int data;
   	 node * next;
   	 
   	 node(int d)
   	  {
   	  	 data=d;
		 next=NULL; 
	  }
	  
	  ~node()
	   {
	   	 int val= data;
	   	 if(next!=NULL)
	   	  {
	   	    
			next= NULL; 
			delete next;	
		  }
		  cout<<"\n Deleted value :- "<<val;
	   }
};
node* head=NULL;

void insert(node* &head,int d)
 {
 	node* newnode=new node(d);
 	if(head==NULL)
 	 {
 	 	head=newnode;
 	 	return;
	 }
	 
	else
	  {
	  	newnode->next=head;
	  	head=newnode;
	  }
 }
 
void print(node* head)
 {
 	 
 	 cout<<endl;
 	 node* temp=head;
 	 while(temp!=NULL)
 	  {
 	     cout<<temp->data<<"->";
		  temp=temp->next;	 
	  }
 }
int getlength(node* &head)
{
	node* temp=head;
	int count=0;
	while(temp)
	 {
	 	count++;
	 	temp=temp->next;
	 }
	return count;
	
}

void update(node* &head)
 {
 	int mid= getlength(head)/2;
 	node* temp=head;
 	int cnt=1;
 	while(cnt<mid)
 	 {
 	 	temp=temp->next;
 	 	cnt++;
	 }
	 node* remove=temp->next;
	 temp->next=remove->next;
	 remove->next=head;
	 head=remove;	
}
void reverse(node* &head)
{
	if(head==NULL || head->next==NULL)
	  return ;
	
	node* prev=NULL;
	node* curr=head;
	node* next=curr;
	while(curr!=NULL)
	 {
	 	next=curr->next;
	 	curr->next=prev;
	 	prev=curr;
	 	curr=next;
	 }
	head=prev; 
}
int main()
 {
 	insert(head,6);
 	insert(head,5);
 	insert(head,4);
 	insert(head,3);
 	insert(head,2);
 	insert(head,1);
 	
 	print(head);
 	
 	//update(head);
 	cout<<endl;
 	reverse(head);
 	print(head);
 	
 	
 	return 0;	
 }
 
 
 
 
 
 
 
 


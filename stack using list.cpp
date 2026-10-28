#include<iostream>
using namespace std;
class node
{
	public:
	 int data;
	 node * next;
	 
	 node(int data)
	  {
	  	this->data=data;
	  	next=NULL;
	  }
	  
	  ~node()
	   {
	   
	   	 next=NULL;
	   	
	   }
	  
};
class stack
 {
 	public:
 	 
 	 node* head;
 	 node* top;
 	 
 	 stack()
 	  {
 	  	
 	  	head=NULL;
 	  	top=NULL;
	   }
 	 void push(int d)
 	  {
 	    node* newnode=new node(d);
		if(head==NULL)
		 {
		 	top=head=newnode;
		 }
		 else
		  {
		    top->next=newnode;
			top=newnode;	
		  }	
	  }
	  
	  void pop()
	   {
	   	if(head==NULL)
	   	  cout<<"\nunderflow!!!";
	   	  
	   	else if(head->next==NULL)
	   	 {
	   	   delete head;
			
		 }
	   	else
	   	 {
	   	 	node* temp=head;
	   	 	while(temp->next!=top)
	   	 	 temp=temp->next;
	   	 	
	   	 	temp->next=NULL;
	   	 	cout<<"\nDeleted data :- "<<top->data;
	   	 	delete top;
	   	 	top=temp;
		 }
	   }
	   
	   bool empty()
	    {
	      if(top==NULL)
	       return true;
	    
	      return false;
		}
		
	  void  peek()
	   {
	   	if(top!=NULL)
	   	 cout<<"\nTop element :- "<<top->data;
	   	else
	   	  cout<<"\nstack is empty";
		}
 };
 int main()
  {
  	stack s;
  	s.push(1);
  	s.push(2);
  	s.push(3);
  	s.push(4);
  	
  	s.pop();
  	
  	s.peek();
  	
  	return 0;
  }

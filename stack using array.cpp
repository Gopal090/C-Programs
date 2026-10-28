#include<iostream>
using namespace std;
class stack
{
  public:
  	 int top,size;
  	 int *arr;
  	 
  	 stack(int size)
  	  {
  	  	top=-1;
  	  	this->size=size;
  	  	arr=new int[size];
      }
    
    void push(int element)
     {
     	if(size-top>1)
     	 {
     	    top++;
     	   arr[top]=element; 	
		 }
		else
		 {
		 	cout<<"\nstack is overflow!!";
		 }
	 }
	 
	 void pop()
	  {
	  	if(top>=0)
	  	 {
	  	 	cout<<"\nDeleted element :- "<<arr[top];
	  	 	top--;
	     }
	  	else
	  	{
	  	  cout<<"\nstack is underflow!!";
	    }
	  }
	  
	void peek()
	 {
	 	if(!empty())
	 	 {
	 	 	cout<<"\nelement at top :- "<<arr[top];
		 }
		 
		 else
		   cout<<"\nstack is empty";
		
	 }
	 
	 bool empty()
	  {
	  	if(top==-1)
	  	 return true;
	  	return false;
	  }
};
int main()
 {
 	stack s(5);
 	s.push(1);
 	s.push(2);
 	s.push(3);
 	s.push(4);
 	s.push(5);
 	s.push(6);
 	
 	s.pop();
 	s.peek();
 	if(s.empty())
 	 cout<<"\nStack is empty";
 	else
 	 cout<<"\nStack is not empty";
 	 
 	return 0;
}

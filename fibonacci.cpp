#include<iostream>
using namespace std;
void fib(int n)
{
  int a=0, b=1,c;
  if(n==1)
   {
   	cout<<a;
   	return;
   }
   else if(n==2)
    {
    	cout<<a<<" "<<b;
    	return ;
	}
	
	for(int i=1;i<=n;i++)
	 {
	 	if(i==2)
		 {
	     	cout<<a<<" "<<b<<" ";
		 }
	 	if(i>2)
	 	 {
	 	 	c=a+b;
	 	 	cout<<c<<" ";
	 	 	a=b;
            b=c;				 
		 }
		 
	 	
	 }
	
	
}

int main()
{
	int num;
	cout<<"\n Enter input for Fibonnaci series :- ";
	cin>>num;
	fib(num);
	return 0;
}

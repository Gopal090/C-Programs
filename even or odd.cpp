#include<iostream>
using namespace std;
int iseven(int n)
{
	 if(n&1)
	  return 0;
	
	return 1;
}

int main()
 {
 	int num;
 	cout<<"\nEnter number :- ";
	cin>>num;
	if(iseven(num)==0)
	 cout<<"\nNumber is Odd ";
	else
	  cout<<"\nNumber is Even "; 
 }

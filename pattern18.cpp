#include<iostream>
using namespace std;
int main()
 {
 	 int num;
 	 cout<<"\nEnter no. of rows :- ";
 	 cin>>num;
 	 for(int i=1;i<=num;i++)
 	  {
 	  	 // printing spaces
 	  	 for(int j=1;j<=num-i;j++)
 	  	  {
 	  	  	 cout<<" ";
		  }
		  // printing star
		  for(int j=1;j<=i;j++)
		  {
		  	cout<<"*";
		  }
		  cout<<endl;
	  }
	  return 0;
 }

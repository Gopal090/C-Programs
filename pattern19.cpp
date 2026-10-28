#include<iostream>
using namespace std;
int main()
 {
 	 int num;
 	 cout<<"\nEnter no. of rows :- ";
 	 cin>>num;
 	 for(int i=num;i>=1;i--)
 	  {
 	  	 
 	  	 for(int j=1;j<=i;j++)
 	  	  {
 	  	  	 cout<<"*";
		  }
		  
		  for(int j=num-i;j>=1;j--)
		   {
		   	 cout<<" ";
		   }
		  cout<<endl;
	  }
	  return 0;
 }

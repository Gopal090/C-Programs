#include<iostream>
using namespace std;
int main()
 {
 	 int num,count=1;
 	 cout<<"\nEnter no. of rows :- ";
 	 cin>>num;
 	 for(int i=1;i<=num;i++)
 	  {
 	  	 
 	  	 for(int j=1;j<=num-i;j++)
 	  	  {
 	  	  	 cout<<" ";
		  }
		  
		  for(int j=1;j<=i;j++)
		   {
		   	cout<<count;
		   	count++;
		   }
		  cout<<endl;
	  }
	  return 0;
 }

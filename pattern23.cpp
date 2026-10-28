#include<iostream>
using namespace std;
int main()
 {
 	 int num;
 	 cout<<"\nEnter no. of rows :- ";
 	 cin>>num;
 	 for(int i =num;i>=1;i--)
 	  {
 	  	 
 	  	 for(int j=1;j<=num-i;j++)
 	  	  {
 	  	  	 cout<<" ";
		  }
		  
		  for(int j=num-i+1; j<=num; j++)
		  {
		  	cout<<j;
		  }
		  cout<<endl;
	  }
	  return 0;
 }

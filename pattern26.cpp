#include<iostream>
using namespace std;
/* 1234554321
   1234**4321
   123****321
   12******21
   1********1   */
int main()
 {
 	 int num;
 	 cout<<"\nEnter no. of rows :- ";
 	 cin>>num;
 	 for(int i=num;i>=1;i--)
 	  {
 	  	 
 	  	 for(int j=1;j<=i;j++)
 	  	  {
 	  	  	 cout<<j;
		  }
		  
		  for(int j=1;j<=num-i;j++)
		   {
		   	 cout<<"**";
		   }
		   
		   for(int j=i;j>=1;j--)
		    {
		     cout<<j;
			}
		  cout<<endl;
	  }
	  return 0;
 }

#include<iostream>
using namespace std;
int main()
 {
 	 int num;
 	 char ch='A';
 	 cout<<"\nEnter no. of rows :- ";
 	 cin>>num;
 	 for(int i=1;i<=num;i++)
 	  {
 	  	 
 	  	 for(int j=1;j<=i;j++)
 	  	  {
 	  	  	 cout<<ch<<" ";
 	  	  	 
		  }
		  ch++;
		  cout<<endl;
	  }
	  return 0;
 }

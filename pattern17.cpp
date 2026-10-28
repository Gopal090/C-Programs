#include<iostream>
using namespace std;
int main()
 {
 	 int num;
 	 char ch='A';
 	 cout<<"\nEnter no. of rows :- ";
 	 cin>>num;
 	 ch=ch+num-1;
 	 for(int i=1;i<=num;i++)
 	  {
 	  	 char n=ch;
 	  	 for(int j=1;j<=i;j++)
 	  	  {
 	  	  	 cout<<n<<" ";
 	  	  	 n++;
		  }
		  ch--;
		  cout<<endl;
	  }
	  return 0;
 }

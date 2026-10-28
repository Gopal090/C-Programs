#include<iostream>
#include<math.h>
using namespace std;
int decimal(int num)
 {
 	 int i=0, digit,ans=0;
  while(num!=0)
   {
   	 digit=num%10;
   	 if(digit==1)
   	  {
		 ans=ans + pow(2,i); 
	  }
	  i++;
	  num=num/10;
   	 
   }
   return ans;	
 }
 int main()
 {
 	 int num;
 	 cout<<"\n Enter binary number :- ";
 	 cin>>num;
 	 int ans=decimal(num);
 	 cout<<"\n Equivalent Decimal :- "<<ans;
 	 return 0;
 }

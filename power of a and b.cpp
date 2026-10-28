#include<iostream>
using namespace std;
int power(int a,int b)
{  
   int ans=1;
   for(int i=1;i<=b;i++)
    ans=ans*a;
    
   return ans;
    
}

int main()
 {
 	 int num,exp;
 	 cout<<"\nEnter number :- ";
 	 cin>>num;
 	 cout<<"\nEnter exponent :- ";
 	 cin>>exp;
 	 
 	 int ans=power(num,exp);
 	 cout<<"\npower :- "<<ans;
 	 
 	 return 0;
 	 
 }

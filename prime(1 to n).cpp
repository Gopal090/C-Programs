#include<iostream>
using namespace std;
void prime(int num)
 {
 	 int flag=0;
 	for(int i=2;i<=num;i++)
 	 { 
 	     flag=0;
 	 	 for (int j=2;j<i;j++)
		    {
		    	if(i%j==0)
		    	{
				  flag=1;
		    	  break;
		    	  
		        }
		    	  
		    	 
			}
		  if(flag==0)
		    cout<<i<<" ";	
  	 }
 	
 }
 
 int main()
  { 
   int num;
   cout<<"\n Enter Input to check prime from 1 to n :- ";
   cin>>num;
   prime(num);
   return 0;
  }

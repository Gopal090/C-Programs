#include<iostream>
using namespace std;
int sec_max(int arr[],int n )
 {
 	 int fsum,ssum;
 	 
 	 if(arr[0]>arr[1])
 	   {
 	   	 fsum=arr[0];
 	   	 ssum=arr[1];
		}
	 else
	  {
	  	 fsum=arr[1];
	  	 ssum=arr[0];
	  	 
	  }
	  
	  for(int i=2;i<n;i++)
	   {
	   	if(arr[i]>fsum)
	   	  {
	   	  	ssum=fsum;
	   	  	fsum=arr[i];
	   	  	
		  }
		else if(arr[i]>ssum) 
		  ssum=arr[i];  
	   }
	   
	   return ssum;
 }
int main()
{
	int arr[10];
	cout<<"\n Enter no. of elements :- \n";
	for(int i=0;i<10;i++)
	  cin>>arr[i];
	
	int res=sec_max(arr,10);
	cout<<"\n Second maximum element is :- "<<res;
	return 0;
}

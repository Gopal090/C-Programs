#include<iostream>
using namespace std;
void threesum(int arr[],int size,int target)
 {  

 	for(int i=0;i<size;i++)
 	 {
 	 	 for(int j=i+1;j<size;j++)
 	 	  {
 	 	  	 
 	 	  	 for(int k=j+1;k<size;k++)
 	 	  	  {
 	 	  	  	if(arr[i]+arr[j]+arr[k]==target)
 	 	  	  	{
					  
 	 	  	  	  cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
 	 	  	       return ;}
			  }
	      }
	  }
 }
 
int main()
{
  	 int arr[8],target;
  	 cout<<"\n Enter values in array \n";
  	 for(int i=0;i<8;i++)
  	  {
  	  	cin>>arr[i];
	  }
	 
	 cout<<"\n Enter the target for three sum :- ";
	 cin>>target;
	 threesum(arr,8,target);
  	 
  	 return 0;
  }

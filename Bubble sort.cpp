#include<iostream>
using namespace std;
void print(int arr[],int n)
 {
 	 for(int i=0;i<n;i++)
 	  cout<<arr[i]<<" ";
 }
void swap(int &a,int &b)
{
  int temp;
  temp=a;
  a=b;
  b=temp;
}
void bubblesort(int arr[],int n)
{
  	 bool flag=false;
  	 for(int i=1;i<n;i++)
  	  {
  	    for(int j=0;j<n-i;j++)
		   {
		   	  if(arr[j]>arr[j+1])
		   	   {
		   	   	 swap(arr[j],arr[j+1]);
				  flag=true; 
			   }
		   }
		   if(flag==false)
		    break;	
	  }
	  
	  
  }
int main()
 {
 	 int arr[100], size;
 	 cout<<"\n Enter size :- ";
 	 cin>>size;
 	 cout<<"\n Enter input in array \n";
 	 for(int i=0;i<size;i++)
 	  cin>>arr[i];
 	 bubblesort(arr,size);
 	 print(arr,size);
 	 return 0;
 }

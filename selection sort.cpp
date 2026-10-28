#include<iostream>
using namespace std;
void swap(int &a,int &b)
 {
 	 int temp;
 	 temp=a;
 	 a=b;
 	 b=temp;
 }
 
void   print(int arr[], int size)
 {
 	 for(int i=0;i<size;i++)
 	  cout<<arr[i]<<" ";
 }
void selection_sort(int arr[],int size)
{
	 int minindex;
	for(int i=0;i<size-1;i++)
	 {
	 	 minindex=i;
	 	 for(int j=i+1;j<size;j++)
	 	  { 
	 	     if(arr[j]<arr[minindex])
	 	      minindex=j;
		  }
		  swap(arr[i],arr[minindex]);
	 }
}

int main()
 {
 	 int arr[100],size;
 	 cout<<"\n Enter size of array :- ";
 	 cin>>size;
 	 cout<<"\n Enter values in array\n ";
 	 for(int i=0;i<size;i++)
 	  {
 	  	 cin>>arr[i];
	  }
	  
	  cout<<"\n Array after sorting :\n";
	  selection_sort(arr,size);
	  print(arr,size);
	  
	  return 0;
 }

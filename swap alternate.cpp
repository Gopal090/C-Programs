#include<iostream>
using namespace std;
void swap_alternate(int arr[], int n)
 {
 	for(int i=0,j=1;i<n-1 && j<n;i+=2,j+=2)
 	 {
 	 	int temp;
 	 	temp=arr[i];
 	 	arr[i]=arr[j];
 	 	arr[j]=temp;
	  }
 }

void print(int arr[],int n)
 {
 	for(int i=0;i<10;i++)
 	 cout<<arr[i]<<" ";
 }
int main()
 {
 	int arr[10];
	 cout<<"\n Enter value in array \n";
	 for(int i=0;i<10;i++)
	  cin>>arr[i];
	
	swap_alternate(arr,10);
	cout<<endl;
	print(arr,10);
	return 0;
	  
 }

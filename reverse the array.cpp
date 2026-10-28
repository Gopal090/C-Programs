#include<iostream>
using namespace std;
void swap(int &a, int &b)
 {
 	int temp;
 	temp=a;
 	a=b;
 	b=temp;
 }
void reverse(int arr[],int n)
{
	int i=0;
	int j=n-1;
	while(i<j)
	 {
	 	swap(arr[i],arr[j]);
	 	i++;
	 	j--;
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
	
	reverse(arr,10);
	cout<<endl;
	print(arr,10);
	return 0;
	  
 }

#include<iostream>
using namespace std;
int linearsearch(int arr[],int n)
 {
 	 int key;
 	 cout<<"\nEnter value to search :- ";
 	 cin>>key;
 	 for(int i=0;i<n;i++)
 	  {
 	  	if(arr[i]==key)
		    return i; 
	  }
	 return -1; 
 }
int main()
 {
 	int arr[100],size;
 	cout<<"\n Enter size :- ";
 	cin>>size;
 	cout<<"\n Enter values\n";
 	for(int i=0;i<size;i++)
 	 cin>>arr[i];
 	 
 	int index= linearsearch(arr,size);
 	if(index==-1)
 	 cout<<"\n Value not found";
 	else
	  cout<<"\n value found at index :- "<<index;
	 
	return 0; 
 	
 }

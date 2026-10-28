#include<iostream>
#include<stack>
using namespace std;
int arr[3][3];
int n=3;
bool knows(int a, int b)
 {
 	for(int i=0;i<n;i++)
 	 {
 	 	if(arr[a][b]==1)
 	 	 return true;
 	 	 
	 }
	 return false;
 }
 
int celeb()
 {
 	stack<int> s;
     for(int i=0;i<n;i++)
       s.push(i);
  
  while(s.size()>1)
   {
   	int a=s.top();
   	s.pop();
   	int b=s.top();
   	s.pop();
   	
   	if(knows(a,b))
   	 s.push(b);
   	else
   	 s.push(a);
   }
 
   int curr=s.top();
   int count=0;
   for(int i=0;i<n;i++)
    {
    	if(arr[curr][i]==0)
    	 count++;
	}
	
	if(count==n)
	 {
	 	int count2=0;
	 	for(int i=0;i<n;i++)
	     {
	 	    if(arr[i][curr]==1 && curr!=i)
	 	     count2++;
	     }
	     if(count2==n-1)
	      return curr;
	 }
	 
	 else
	  {
	  	return -1;
	  }
 }
int main()
 {
 	cout<<"\nEnter input for celebrity problem\n";
 	for(int i=0;i<n;i++)
 	 {
 	   for(int j=0;j<n;j++)
		 {
		   cin>>arr[i][j]; 	
		 }	
		 cout<<endl;
	 }
	int num=celeb(); 
	if(num==-1)
	 {
	   cout<<"\nNo celebrity is present."; 	
	 } 
	 
	 else
	 {
	 	cout<<"\nCelebrity is "<<num<<" person.";
	 }
   	return 0; 
}
   
   
   
   
   

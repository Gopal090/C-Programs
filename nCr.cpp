#include<iostream>
using namespace std;
int fact(int num)
 {  
    int res=1;
 	for(int i=1;i<=num;i++)
 	 res*=i;
 	 
 	return res;
 }
int nCr(int n,int r)
 {
 	int a,b;
 	a=fact(n);
 	b=fact(n-r);
 	cout<<a<<" "<<b;
 	return a/b;
 }
int main()
 {
 	 int n,r;
 	 cout<<"\n Enter n :- ";
 	 cin>>n;
 	 cout<<"\n Enter r :- ";
 	 cin>>r;
 	 
 	 int res=nCr(n,r);
 	 cout<<"\n Result of nCr :- "<<res;
 	 return 0;
 }

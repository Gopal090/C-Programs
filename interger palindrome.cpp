#include<iostream>
using namespace std;
int main()
 {
 	int num;
 	cout<<"\n Enter value to check palindrome...\n";
 	cin>>num;
 	int val=num;
 	int n,j;
 	j=0;
 	while(num)
 	  {
 	  	n=num%10;
 	  	j=(j*10)+n;
 	  	num=num/10;
	  }
	if(val==j)
	 cout<<endl<<val<<" is palindrome...";
	else
	 cout<<endl<<val<<" is not palindrome...";
	
	return 0;
 }

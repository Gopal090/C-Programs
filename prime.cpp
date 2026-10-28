#include<iostream>
using namespace std;
int prime(int num)
 {
 	 int flag=0;
 	 for(int i=2;i<num;i++)
 	  {
 	  	if(num%i==0)
 	  	 {
 	  	 	flag=1;
 	  	 	cout<<num<<" is not prime. ";
 	  	 	break;
	   	}
	  }
	return flag;
 }
 
 int main()
  {
  	int num;
  	char ch='y';
  	do{
	  
  	cout<<"\n Enter value\n ";
  	cin>>num;
    int flag =prime(num);
    if(flag==0)
     cout<<num<<" is prime.";
    
    cout<<"\n Do you to check again (y/n) ";
    cin>>ch;
    }while(ch=='y'); 
    
  	return 0;
  }

#include<iostream>
using namespace std;
int main()
 {
   int a,b;
   char ch='y',op;
   
   do{
   cout<<"\nEnter Two input :-\n ";
   cin>>a>>b;
   cout<<"\nEnter operation (+,-,*,/,%) :- ";
   cin>>op;
   cout<<endl;
   switch(op)
    {
    	case '+':
    		cout<<a+b<<endl;
    		break;
    	case '-':
    		cout<<a-b<<endl;
    		break;
    	case '*':
    		cout<<a*b<<endl;
    		break;
    	case '/':
    		cout<<a/b<<endl;
    		break;
    	case '%':
    		cout<<a%b<<endl;
    		break;
    	default:
    		cout<<"Invalid Operation !!!";
    		 break;
	}
	cout<<"\n Try Again (Y/N) :- ";
	cin>>ch;
	
}while(ch=='y'|| ch=='Y');
	return 0;
 }

#include<iostream>
using namespace std;
int main()
 {
 	 int amount,n,a,b,c,d;
 	 cout<<"\nEnter Amount :- ";
 	 cin>>amount;
 	 n=amount;
 	 switch(1)
 	 {
 	 	case 1:
	      a= n/100;
		  cout<<"\n 100 rs :- "<< a;
		  n=  n- (a*100);
		 
		case 2:
		  b=n/50;
		  cout<<"\n 50 rs  :- "<< b;
		  n=n-(b*50);
		 
		case 3:
		  c= n/20;
		  cout<<"\n 20 rs  :- "<< c;
		  n=n-(c*20);
		  
		case 4:
		  d=n;
		  cout<<"\n 1 rs   :- "<< d;
		   
	 }
	 return 0;
 }

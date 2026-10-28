 #include<iostream>
 using namespace std;
 int main()
 {
 	int num;
 	char ch='A';
 	cout<<"\n Enter value ";
 	cin>>num;
 	for(int i=1;i<=num;i++)
 	{
 		
 		for(int j=1;j<=num;j++)
 		 { 
 		  cout<<ch<<" ";
 		  ch++;
		 }
		 cout<<endl;
    }
    return 0;
 }

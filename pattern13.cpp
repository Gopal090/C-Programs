 #include<iostream>
 using namespace std;
 int main()
 {
 	int num;
 	char ch='A',v;
 	cout<<"\n Enter value ";
 	cin>>num;
 	for(int i=1;i<=num;i++)
 	{
 		
 		for(int j=1;j<=num;j++)
 		 { 
 		  v=ch+j-1;
 		  cout<<v<<" ";
		 }
		 ch++;
		 cout<<endl;
    }
    return 0;
 }

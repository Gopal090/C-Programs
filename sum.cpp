#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"\n Enter value to print sum from 1 to n"<<endl;
	cin>>num;
	for(int i=1;i<=num;i++)
	 sum+= i;
	cout<<"\n sum = "<<sum;
	return 0;
}

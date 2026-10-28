#include<iostream>
#include<math.h>
using namespace std;
int binary(int num)
{
	int bit,i=0, ans=0;
	while(num!=0)
	 {
       bit=num&1;
       ans= (bit * pow(10,i))+ ans;
       i++;
       num=num>>1;
       
	 }
	 return ans;
}
int main()
 {
    int num,ans;
	cout<<"\n Enter any positive integer :- ";
	cin>>num;
	ans=binary(num);
	cout<<"\n Equivalent Binary :- "<<ans;
	   
 	return 0;
 }

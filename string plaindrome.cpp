#include<iostream>
using namespace std;
int getlength(string s)
 {
 	int count=0;
 	for(int i=0;s[i]!='\0';i++)
 	 count++;
 	return count;
 }
bool palindrome(string s)
 {
 	int len=getlength(s);
 	int j=len-1;
 	for(int i=0;i<len;i++,j--)
 	 {
 	 	if(s[i]!=s[j])
 	 	 return false;
	 }
	return true;
 }
int main()
 {
 	string s;
 	cout<<"\n Enter the string \n";
 	cin>>s;
 	bool ans=palindrome(s);
 	if(ans==true)
 	  cout<<s<<" is palindrome...";
 	else
 	  cout<<s<<" is not palindrome...";
 	
 	return 0;
 }

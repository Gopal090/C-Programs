#include<iostream>
#include<stack>
int main()
{
	using namespace std;
	string str;
	cout<<"\n Enter string ";
	cin>>str;
	stack<char> s;
	
	for(int i=0;i<str.length();i++)
	 {
	 	char ch=str[i];
	 	s.push(ch);
	 	
	 }
	 
	 string ans="";
	 for(int i=0;i<str.length();i++)
	  {
	  	char ch=s.top();
	  	s.pop();
	  	ans.push_back(ch);
	  }
	  
	  cout<<"\n Reverse :-"<<ans;
	  return 0;
}

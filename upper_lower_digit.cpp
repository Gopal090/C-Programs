#include<iostream>
using namespace std;
int main()
{
 char ch;
 cout<<"\n Enter input\n";
 cin>>ch;
 if(isupper(ch))
  cout<<"\n This is upper case";
 else if(islower(ch))
  cout<<"\n This is lower case";
 else if(isdigit(ch))
  cout<<"\n This is digit";
  
  return 0;
}

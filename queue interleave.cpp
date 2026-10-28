#include<iostream>
#include<queue>
using namespace std;
void interleave(queue<int> &q)
{
   queue<int> newq;
   int n=q.size();
   for(int i=0; i<n/2;i++)
    {
    	int val=q.front();
    	q.pop();
    	newq.push(val);
	}
	while(!newq.empty())
	{
		int val1=newq.front();
		newq.pop();
		q.push(val1);
		int val2=q.front();
		q.pop();
		q.push(val2);
		
	}
	
}
void print(queue<int> q)
{
	 int n=q.size();
	for(int i=0;i<n;i++)
	 {
	 	int val=q.front();
	 	q.pop();
	 	cout<<val<<" ";
	 }
}
int main()
{
	queue<int> q;
	q.push(11);
	q.push(12);
	q.push(13);
	q.push(14);
	q.push(15);
	q.push(16);
	q.push(17);
	q.push(18);
	
	interleave(q);
	print(q);
	return 0;
}

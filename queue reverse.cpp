#include<iostream>
#include<queue>
using namespace std;
void reverse(queue<int> &q)
{
	if(q.empty())
	 return;
	
	int val=q.front();
	q.pop();
	reverse(q);
	q.push(val);
}
void print(queue<int> q)
{
	for(int i=0;i<4;i++)
	{
		cout<<q.front()<<" ";
		q.pop();
	}
}

int main()
{
	
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	
	reverse(q);
	print(q);
	return 0;
}

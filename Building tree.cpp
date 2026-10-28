#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class node
{
 public:
  int data;
  node* left;
  node* right;
  
  node(int d)
  {
	data=d;
	left=right=NULL;  	
  }	
};

node* buildtree(node* root)
{
	cout<<"\nEnter data :- ";
	int data;
	cin>>data;
	if(data==-1)
	 return NULL;
	root=new node(data);
	cout<<"\nEnter data for left child of " <<data;
	root->left=buildtree(root->left);
	cout<<"\nEnter data for right child of " <<data;
	root->right=buildtree(root->right);
	
	return root; 
}

void inorder(node * root)
{
	if(!root)
	 return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void preorder(node * root)
{
	if(!root)
	 return;
	
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(node * root)
{
	if(!root)
	 return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
/*
vector<int> inorderitr(node* root)
{
	stack<node*> s;
	node* curr=root;
	vector<int> ans;
	
	while(curr!=NULL || !s.empty())
	 {
	 	while(curr!=NULL)
	 	 {
	 	   s.push(curr);
		   curr=curr->left;	
		 }
		
		node*temp=s.top();
		s.pop();
		ans.push_back(temp->data);
		
		curr=curr->right;
	 }
return ans;	
}
*/
node* bflo(node* root)
{
	cout<<"\nEnter data for root node :- ";
	int data;
	cin>>data;
	root=new node(data);
	
	queue<node*> q;
	q.push(root);
	
	while(!q.empty())
	 {
	 	node* temp=q.front();
	 	q.pop();
	 	
	 	int leftdata;
	 	cout<<"\nEnter left data for "<<temp->data<<"  :- ";
	 	cin>>leftdata;
	 	if(leftdata!=-1)
	 	 {
	 	   temp->left=new node(leftdata);
		   q.push(temp->left); 	
		 }
		 
		int rightdata;
	 	cout<<"\nEnter right data for "<<temp->data<<"  :- ";
	 	cin>>rightdata;
	 	if(rightdata!=-1)
	 	 {
	 	   temp->right=new node(rightdata);
		   q.push(temp->right); 	
		 }
	 }
	 return root;
}
void levelorder(node* root)
{
	if(!root)
	 return;
	
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty())
	{
		node* temp=q.front();
		q.pop();
		
		if(temp==NULL)
		 {
		 	cout<<endl;
		 	if(!q.empty())
		 	 q.push(NULL);
		 }
		else
		{
		  cout<<temp->data<<" ";	
		  if(temp->left)
		   q.push(temp->left);
		  if(temp->right)
		   q.push(temp->right);
		} 
			
	}
	return;
}
void reverselevelorder(node* root)
{
	if(!root)
	 return;
	
	queue<node*> q;
	stack<node*> s;
	q.push(root);
	vector<int> ans;
	
	while(!q.empty())
	 {
	 	node* temp=q.front();
	 	q.pop();
	 	
	 	s.push(temp);
	 	if(temp->right)
	 	 q.push(temp->right);
	 	if(temp->left)
	 	 q.push(temp->left);
	 }
	 while(!s.empty())
	 {
	 	cout<<s.top()->data<<" ";
	  	s.pop();
	 }
	 
	 
}
int main()
{
	node* root=NULL;
	//root=buildtree(root);
	root=bflo(root);
	//levelorder(root);
	/*inorder(root);
	cout<<endl;
	preorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;
	*/
	
    reverselevelorder(root);
	cout<<endl;
	return 0;
}

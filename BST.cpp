#include<iostream>
using namespace std;
class node
{
	public:
	 int data;
	 node* left, *right;
	
	node(int d)
	 {
	 	data=d;
	 	left=right=NULL;
	 }
};
node* insert(node* root,int val)
{
	if(root==NULL)
	 {
	 	node* root=new node(val);
	 	return root;
	 }
	 if(val<root->data)
	  {
	  	root->left=insert(root->left,val);
	  	return root;
	  }
	
	else 
	  {
	  	root->right=insert(root->right,val);
	  	return root;
	  }
}

void inorder(node* root)
{
	if(root==NULL)
	 return;
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
	
}
void searchbst(node* root)
{
	node* temp=root;
	int data;
	cout<<"\n Enter data to search :- ";
	cin>>data;
	while(temp!=NULL)
	 {
	 	if(data==temp->data)
	 	 {
	 	 	cout<<"\n Data found!!! ";
	 	 	return;
		 }
		 
		 if(data<temp->data)
		  temp=temp->left;
		 else
		  temp=temp->right;	
	 }
	 cout<<"\n Data not found in BST ";	
}
void createbst(node* &root)
{
	int val;
	cout<<"\n Enter value to create BST :- ";
	cin>>val;
	while(val!=-1)
	 {
	 	root=insert(root,val);
	 	cin>>val;
	 }
}
void min(node* root)
{
	if(root==NULL)
	  cout<<"\n BST is empty" ;
	node* temp=root;
	while(temp->left!=NULL)
	 {
	 	temp=temp->left;
	 }
	 
	  cout<<"\n Min value in BST :- "<< temp->data;
}
void max(node* root)
{
	if(root==NULL)
	 cout<<"\n BST is empty" ;
	node* temp=root;
	while(temp->right!=NULL)
	 {
	 	temp=temp->right;
	 }
	 cout<<"\n Max value in BST :- "<< temp->data;
}
node* inordersuccessor(node* root)
{
	node* temp=root;
	temp=temp->right;
	while(temp->left!=NULL)
	 {
	 	temp=temp->left;
	 }
	 return temp;
}
node* deletefrombst(node* root,int val)
{
	if(root==NULL)
	 return NULL;
	
	if(root->data==val)
	 {
	 	//0 child
	 	if(root->left==NULL && root->right==NULL)
	 	 {
	 	 	delete root;
	 	 	return NULL;
		 }
		// 1 child
		if(root->left!=NULL && root->right==NULL)
		 {
		 	node* temp=root->left;
		 	delete root;
		 	return temp;
		 }
		 if(root->left==NULL && root->right!=NULL)
		 {
		 	node* temp=root->right;
		 	delete root;
		 	return temp;
		 }
		 //2 child
		 if(root->left!=NULL && root->right!=NULL)
		  {
		  	int mini=inordersuccessor(root)->data;
		  	root->data=mini;
		  	root->right=deletefrombst(root->right,mini);
		  	return root;
		  }
		 
	 	
	 }
	else if(val<root->data)
	 {
	 	root->left=deletefrombst(root->left,val);
	 	return root;
	 }
	else
	 {
	 	root->right=deletefrombst(root->right,val);
	 	return root;
	 }
}
int main()
{
	node* root=NULL;
	createbst(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	searchbst(root);
	min(root);
	max(root);
	
	int val;
	cout<<"\n Enter value to delete :- ";
	cin>>val;
	root=deletefrombst(root,val);
	
	cout<<endl;
	inorder(root);
	
	return 0;	
}

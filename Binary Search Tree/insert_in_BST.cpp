//Bismillahir Rahmanir Rahim
//Soaib Ahmed...

#include <bits/stdc++.h>

using namespace std;

//Driver code
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }    

};
Node* input_tree()
{
    int val;        cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root)q.push(root);
    while (!q.empty())
    {
        Node* f=q.front();
        q.pop();

        int l,r;        cin>>l>>r;
        Node* left;
        Node* right;
        if(l==-1)left=NULL;
        else left=new Node(l);
        if(r==-1)right=NULL;
        else right=new Node(r);
        f->left=left;
        f->right=right;

        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);

    }
    return root;
}
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        
        Node *f = q.front();
        q.pop();


        cout << f->val << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
void insert(Node* &root,int x)
{
    if(root==NULL) 
    {
        root = new Node(x);
        return;
    }
    if(x<root->val)
    {
        if(root->left == NULL) root->left = new Node(x);
        else insert(root->left,x);
    }
    else 
    {
        if(root->right == NULL) root->right = new Node(x);
        else insert(root->right,x);
    }
}
int main()
{
    Node* root=input_tree();
    int x;      cin>>x;
    insert(root,x);
    level_order(root);
    return 0;
}

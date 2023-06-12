//Bismillahir Rahmanir Rahim
//Soaib Ahmed...

#include <bits/stdc++.h>

using namespace std;

//Driver code
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }    

};
void Insert_Node(Node *&head,int v)
{
    Node *newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        cout<<endl;
        cout<<"Inserted at head"<<endl;
        return;
    }
    Node * temp=head;
    while (temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    cout<<endl;
    cout<<"Inserted at tail"<<endl<<endl;

}
void Print_Linked_List(Node *head)
{
    cout<<endl;
    cout<<"Following Linked List: "<<endl;
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}
void Insert_at_Position(Node *head,int pos,int v)
{
    Node *newNode=new Node(v);
    Node *temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    cout<<endl<<endl;
    cout<<"Inserted at position"<<pos<<endl<<endl;
}
int main()
{
    Node *head=NULL;
    while (true)
    {
        cout<<"Option 1 for Insert a Node at Tail"<<endl;
        cout<<"Option 2 Print Linked List"<<endl;
        cout<<"Option 3 Isert at any positon"<<endl;
        cout<<"Option 4 break"<<endl;
        int op;         cin>>op;
        if(op==1)
        {
            cout<<"Insert a value"<<endl;
            int val;
            cin>>val;
            Insert_Node(head,val);
        }
        else if(op==2)Print_Linked_List(head);
        else if(op==3)
        {
            int pos;  
            cout<<"Enter Position: ";   
            cin>>pos;
            int v;
            cout<<"Enter Value: ";
            cin>>v;
            Insert_at_Position(head,pos,v);
            
        }
        else if(op==4)break;

    }
    
    return 0;
}


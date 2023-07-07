//Bismillahir Rahmanir Rahim
//Soaib Ahmed...

#include <bits/stdc++.h>

using namespace std;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  ll       long long int
#define  ld       long long double
#define  int_out(x) printf("%d",x)
#define  sp       " "
#define  pb       push_back
#define  cinv     for(auto &i:v) cin >> i;
#define  vi       vector<int>
#define  vii      vector<ll>
#define  cout(v)  for(auto e:v) cout << e << sp;
#define  ma_x     100000008
#define  yes      cout << "YES" << endl
#define  no       cout << "NO" << endl
#define  case     "Case " << test++ << ": "
#define  all(v)   v.begin(), v.end()
#define  tst      int tst; int test=1; cin >> tst; while(tst--)
#define  Faster   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define  nl       "\n"




//Driver code
class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node*& head, Node*& tail, int val) 
{
    Node* newNode = new Node(val);
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
    } 
    else 
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void remove_dp(Node* head) 
{
    Node* curr = head;
    while (curr != NULL)
    {
        Node* temp = curr;
        while (temp->next != NULL) 
        {
            if (temp->next->val == curr->val)
            {
                Node* dp = temp->next;
                temp->next = temp->next->next;
                delete dp;
            } 
            else 
            {
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
}

void print_linked_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    while (true) {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    remove_dp(head);
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
    print_linked_list(head);

    return 0;
}

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
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_list(Node *head) 
{
    //there print left
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << sp;
        tmp = tmp->next;
    }
    cout << nl;

    // print right...
    cout << "R -> ";
    tmp = head;
    while (tmp->next != NULL) 
    {
        tmp = tmp->next;
    }
    while (tmp != NULL) 
    {
        cout << tmp->val << sp;
        tmp = tmp->prev;
    }
    cout << nl;
}

void insert(Node *&head, Node *&tail, int ind, int val) {
    Node *new_node = new Node(val);
    if (ind < 0) 
    {
        cout << "Invalid" << nl;
        return;
    } 
    else if (ind == 0) 
    {
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
        } 
        else 
        {
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
    } 
    else 
    {
        Node *curr = head;
        int i = 0;
        while (i < ind - 1 && curr != NULL) {
            curr = curr->next;
            i++;
        }
        if (curr == NULL) {
            cout << "Invalid" << endl;
            return;
        } 
        else if (curr == tail) {
            curr->next = new_node;
            new_node->prev = curr;
            tail = new_node;
        } 
        else 
        {
            curr->next->prev = new_node;
            new_node->next = curr->next;
            curr->next = new_node;
            new_node->prev = curr;
        }
    }
    print_list(head);
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while(q--)
    {
        int ind, val;
        cin >> ind >> val;
        insert(head, tail, ind, val);
    }
    return 0;
}

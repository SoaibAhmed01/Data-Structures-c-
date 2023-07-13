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

void print_order(Node* root, int x) 
{
    queue<Node*> q;
    q.push(root);
    int level = 0;
    bool flag = false;
    while (!q.empty() and !flag) {
        int size = q.size();
        for (int i = 0; i < size; i++) 
        {
            Node* curr = q.front();
            q.pop();
            if (level == x) 
            {
                cout << curr->val << sp;
                flag = true;
            }

            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
        level++;
    }
    if (!flag) cout << "Invalid" << nl;
    else cout << nl;
}

void solve() 
{
    int val;    cin >> val;
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) 
    {
        Node* f = q.front();
        q.pop();
        int left_val, right_val;      cin >> left_val >> right_val;
        
        if (left_val != -1) 
        {
            f->left = new Node(left_val);
            q.push(f->left);
        }
        if (right_val != -1) 
        {
            f->right = new Node(right_val);
            q.push(f->right);
        }
    }
    int x;      cin>>x;
    print_order(root, x);
}

int main() 
{
    solve();
    return 0;
}


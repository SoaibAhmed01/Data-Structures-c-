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

class Stack 
{
public:
    int *a;
    int top;
    int sz;
    Stack(int s) 
    {
        sz = s;
        a = new int[sz];
        top = 0;
    }
    Stack()
    {
        delete[] a;
    }
    void push(int val) 
    {
        if (top == sz) return;
        a[top] = val;
        top++;
    }
    int pop() 
    {
        if (top == 0) return 0;
        top--;
        int val = a[top];
        return val;
    }
    bool isEmpty() 
    {
        return top == 0;
    }
};

class Queue 
{
public:
    int *a;
    int front;
    int back;
    int sz;
    Queue(int s) {
        sz = s;
        a = new int[sz];
        front = 0;
        back = 0;
    }
    Queue()
    {
        delete[] a;
    }
    void push(int val) {
        if (back == sz) return;
        a[back] = val;
        back++;
    }
    int pop() {
        if (front == back) return 0;
        int val = a[front];
        front++;
        return val;
    }
    bool isEmpty() {
        return front == back;
    }
};

int main() 
{
    int n, m;       cin >> n >> m;
    
    int *a = new int[n];
    int *b = new int[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    Queue q(m);
    for (int i = 0; i < m; i++) q.push(b[i]);

    Stack s(m);
    while (!q.isEmpty()) 
    {
        int val = q.pop();
        s.push(val);
    }

    bool flag = true;
    for (int i = 0; i < n; i++) 
    {
        if (a[i] != s.pop()) 
        {
            flag = false;
            break;
        }
    }

    if (flag && s.isEmpty()) yes;
    else no;

    delete[] a;
    delete[] b;

    return 0;
}
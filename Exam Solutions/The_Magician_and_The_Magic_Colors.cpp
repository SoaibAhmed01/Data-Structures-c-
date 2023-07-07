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
void solve()
{
    int n;      cin>>n;
    string s;   cin>>s;
    stack<char>st;
    for(int i=0;i<n;i++)
    {
        char c=s[i];
        if(!st.empty() and ((st.top()=='R' and c=='G') or (st.top()=='G' and c=='R')))
        {
            st.pop();
            st.push('Y');
        }
        else if(!st.empty() and ((st.top()=='R' and c=='B') or (st.top()=='B' and c=='R')))
        {
            st.pop();
            st.push('P');
        }
        else if(!st.empty() and ((st.top()=='B' and c=='G') or (st.top()=='G' and c=='B')))
        {
            st.pop();
            st.push('C');
        }
        else st.push(c);
        if(st.size() >= 2)
        {
            char top_1=st.top();
            st.pop();
            char top_2=st.top();
            st.pop();
            if(top_1 != top_2)
            {
                st.push(top_2);
                st.push(top_1);
            }
        }

    }
    string final="";
    while (!st.empty())
    {
        final=st.top() + final;
        st.pop();
    }
    cout<<final<<nl;
    

}

int main()
{
    Faster;
    int tc;     cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}


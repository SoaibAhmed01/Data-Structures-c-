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
    vi a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    bool flag=false;
    for(int i=0;i<n-1;i++)
    {
        int low=i+1;
        int high=n-1;
        while (low<=high)
        {
            int mid=low+(high-low)/2;
            if(a[mid]==a[i])flag=true;
            else if(a[mid]<a[i])low=mid+1;
            else high=mid-1;
        }
        
    }
    if(flag==true)yes;
    else no;
    
    

}

int main()
{
    Faster;
    solve();
    return 0;
}


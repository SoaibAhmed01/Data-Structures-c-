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
int main() 
{
    list<string> lst;
    string s;
    int n;
    while (cin >> s) 
    {
        if (s == "end") {
            break;
        }
        lst.pb(s);
    }

    cin >> n;
    auto it = lst.begin();
    for (int i = 0; i < n; i++) 
    {
        string q;
        cin >> q;

        if (q == "visit") 
        {
            string s;
            cin >> s;

            auto it2 = find(lst.begin(), lst.end(), s);

            if (it2 == lst.end()) cout << "Not Available" << endl;
            else 
            {
                cout << *it2 << endl;
                it = it2;
            }
        } 
        else if (q == "prev") 
        {
            if (it == lst.begin()) cout << "Not Available" << endl;
            else 
            {
                it--;
                cout << *it << endl;
            }
        } 
        else if (q == "next") 
        {
            auto it2 = it;
            it2++;
            if (it2 == lst.end()) cout << "Not Available" << endl;
            else 
            {
                it++;
                cout << *it << endl;
            }
        }
    }

    return 0;
}

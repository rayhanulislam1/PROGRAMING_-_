#include <bits/stdc++.h>
#include<vector>
using namespace std;

#define ll long long int
#define int ll
#define ld long double
#define pb push_back
#define mp make_pair
#define ft front()
#define bk back()
#define pi 2*acos(0.0)     /// acos(-1) , 3.14159265359
const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5;
#define gap ' '
#define en '\n'
#define endl en
#define sz(x) (int(x.size()))
#define sor(x)  sort(x.begin(), x.end())
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define rng(x,y) uniform_int_distribution<int>(x,y)(rng)
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define each(a,x) for (auto& a: x)

void solve(int tt){
    int n, in = 0, x = 0;
    cin >> n;
    int arr[n];
    F0R(i, n){
        cin >> arr[i];
    }
    map <int , int> m;
    set <int> s;
    for(int i = n-1; i >= 0; i--){
        if(arr[i] < arr[i-1] && i-1 >= 0){
            in = i;
            break;
        }
    }
    //cout << in << en;
    for(int i = 0; i < in; i++){
        s.insert(arr[i]);
        m[arr[i]] = 1;
    }
    for(int i = in; i < n; i++){
        if(m[arr[i]] == 1){
            x = i;
        }
    }
    for(int i = in; i < x; i++){
        s.insert(arr[i]);
    }
    cout << s.size() << en;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve(i);}
    return 0;
}

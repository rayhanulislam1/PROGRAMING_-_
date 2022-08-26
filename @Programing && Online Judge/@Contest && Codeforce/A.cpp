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
    int a, b, x, sum1 = 0;
    cin >> a >> b;
    int arr[a];
    int arr1[a];
    F0R(i, a){
        cin >> arr[i];
    }
    sort(arr, arr + a);
    for(int i = a-1; i >= 0; i--){
        sum1 += arr[i];
        arr1[a-i-1] = sum1;
    }
    // F0R(i, a){
    //     cout << arr1[i] << " ";
    // }
    // cout << en;
    F0R(i, b){
        int k, low = 0, high = a, mid = 0, ans = 0;
        cin >> x;
        while(low <= high){
            mid = (low + high)/2;
            if(arr1[mid] >= x){
                ans = mid;
                high = mid-1;
            }else if(x >= arr1[mid]){
                ans = mid;
                low = mid + 1;
            }
            if(arr1[mid] == x){
                break;
            }
        }
        ans++;
        //cout << x << " " << ans << en;
        if(ans > a){
            cout << -1 << en;
        }else if(arr1[ans-1] < x){
            cout << ans+1 << en;
        }else cout << ans << en;
    }
}
int32_t main(){
    #ifndef DEBUG
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    #endif
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve(i);
    }
    return 0;
}
#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define per(i, n) for(int i = (n) - 1; i >= 0; i--)
using ll = long long;
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
constexpr int mod = 1000000007;
using namespace std;
template<class T, class U>
bool chmax(T &a, const U &b){ return a < b ? (a = b, 1) : 0; }
template<class T, class U>
bool chmin(T &a, const U &b){ return a > b ? (a = b, 1) : 0; }

int main(){
    int n;
    cin >> n;
    vl a(n),b(n),x(n);
    rep(i,n-1)
        cin >> a[i] >> b[i] >> x[i];
    
    vl time(n,1e18);
    time[0] = 0;
    rep(j,n-1){
        rep(i,n-1){
            time[i+1] = min(time[i]+a[i],time[i+1]);
            time[x[i]] = min(time[i]+b[i],time[x[i]]); 
        }
    }
    cout  << time[n-1];
}
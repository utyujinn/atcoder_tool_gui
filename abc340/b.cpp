#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define per(i, n) for(int i = (n) - 1; i >= 0; i--)
using ll = long long;
#define vi vector<int>
#define vc vector<char>
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
    int q;
    cin >> q;
    int x;
    int k;
    vi v(q);
    int j = 0;
    rep(i,q){
        cin >> x >> k;
        if(x == 1){
            v[j] = k;
            j++;
        }else{
            cout << v[j-k] << endl;
        }
    }
}
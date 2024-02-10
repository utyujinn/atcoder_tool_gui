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
    int h,w,n;
    cin >> h >> w >> n;
    vector<vector<char>> vv(h,vector<char>(w,'.'));
    struct Grid {
        int x;
        int y;
        int d;
    };
    Grid now = {0,0,0};
    rep(i,n){
        if(vv[now.y][now.x] == '.'){
            vv[now.y][now.x] = '#';
            if(now.d == 0){
                now.d = 1; now.x++;
            }else if(now.d == 1){
                now.d = 2; now.y++;
            }else if(now.d == 2){
                now.d = 3; now.x--;
            }else if(now.d == 3){
                now.d = 0; now.y--;
            }
        }
        else{
            vv[now.y][now.x] = '.';
            if(now.d == 0){
                now.d = 3; now.x--;
            }else if(now.d == 1){
                now.d = 0; now.y--;
            }else if(now.d == 2){
                now.d = 1; now.x++;
            }else if(now.d == 3){
                now.d = 2; now.y++;
            }
        }
        if(now.x == -1)
            now.x = w-1;
        if(now.x == w)
            now.x = 0;
        if(now.y == -1)
            now.y = h-1;
        if(now.y == h)
            now.y = 0;
    }
    rep(i,h){
        rep(j,w)
            cout << vv[i][j];
        cout << endl;
    }
}
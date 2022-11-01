#include<bits/stdc++.h>


using namespace std;
using ll = long long;
using db = double;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    priority_queue<ll , vector<ll> ,greater<ll>> v;
    for (int i =0 ;i < n ;i++){
        int x; cin >> x;
        v.push(x);
    }
    ll ans =0;
    while (v.size() > 1){
        ll day1 = v.top(); v.pop();
        ll day2 = v.top(); v.pop();
        ans += (day1 + day2);
        v.push(day1 + day2);
    }
    cout << ans;
}

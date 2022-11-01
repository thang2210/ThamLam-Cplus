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
    int k; string s; cin >> k >> s;
    priority_queue<int> v;
    map<char,int> a;
    for (auto x : s){
        a[x]++;
    }
    ll res =0;
    for (pair<char,int> x : a){
        v.push(x.second);
    }
    while(!v.empty() && k--){
        int tm = v.top();
        v.pop();
        tm--;
        if (tm > 0) v.push(tm);
    }
    while(!v.empty()){
        res += v.top() * v.top();
        v.pop();
    }
    cout << res;
}

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
    string s; cin >> s;
    map<char,int> v;
    for (auto x : s){
        v[x]++;
    }
    int ans = 0;
    for (auto x : v){
        ans = max(ans , x.second);
    }
    if(s.size() % 2 == 0 && 2 * ans <= s.size()){
        cout << "YES";
    } else if (s.size() % 2 == 1 && ans <= (s.size() / 2 + 1)){
        cout << "YES";
    } else {
        cout << "NO";
    }
}

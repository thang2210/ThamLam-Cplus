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
    int n , s, m; cin >> n >> s >> m;
    if((s - s/ 7) * n < s * m) cout << -1;
    else {
        for (int i = 1; i <= s - s/7 ; i++){
            if (n * i >= s * m){
                cout << i;
                return 0;
            }
        }
    }
}

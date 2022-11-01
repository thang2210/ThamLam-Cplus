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



struct job{
    int stt , dl , pro;
};


bool cmp(job a , job b){
    return a.pro > b.pro;
}
int main(){
    int n; cin >> n;
    job a[n];
    for (int i =0 ;i < n ;i++){
        cin >> a[i].stt >> a[i].dl >> a[i].pro;
    }
    sort(a , a + n , cmp);
    ll ans =0;
    bool check[n + 1];
    memset(check , false , sizeof(check));
    for (int i = 0; i < n ;i++){
        for (int j = a[i].dl ; j >= 0 ; j--){
            if(!check[j]){
                check[j] = true;
                ans += a[i].pro;
                break;
            }
        }
    }
    cout << ans;
}

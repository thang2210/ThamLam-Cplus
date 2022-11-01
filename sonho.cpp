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
    int s , k;
    cin >> s >> k;
    if(k * 9 < s) cout << -1;
    else {
        string tm = "";
        s--;

        for (int i =0 ;i < k -1; i++){
            if(s >= 9){
                tm += "9";
                s -= 9;
            } else {
                tm = to_string(s) +tm;
                s =0;
            }
        }
        s++;
        tm = to_string(s) + tm;
        cout << tm;
    }
    
}



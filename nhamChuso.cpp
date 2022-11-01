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

void Lon(string &s){
    for (char &x : s){
        if(x == '5'){
            x = '6';
        }
    }


}

void nho(string &s){
    for (char &x : s){
        if (x == '6'){
            x = '5';
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s , t; cin >> s >> t;
    Lon(s); Lon(t);
    cout << stoll(s)  + stoll(t);
    cout << " ";
    nho(s); nho(t);
    cout << stoll(s) + stoll(t);
}

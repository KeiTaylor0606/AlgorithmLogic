#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

/*約数全列挙*/

/*
d = 1から[√N]まで以下の操作を繰り返す
・Nを割り切れたら、dとN/dを約数として保存する
*/

vector<ll> divisor(ll n){
    vector<ll> ret;
    for(ll i = 1; i*i <= n; i++){
        if(n%i == 0){
            ret.push_back(i);
            if(i*i != n){
                ret.push_back(n / i);
            }
        }
    }
    sort(ret.begin(), ret.end());
    return ret;
}
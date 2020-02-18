#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 1001001001;

// 最小公倍数
ll lcm(ll a, ll b) {
  ll x = a * b;

  // 自然数 a > b を確認・入替
  if(a<b){
    ll tmp = a;
    a = b;
    b = tmp;
  }

  // ユークリッドの互除法
  ll r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }

  // 最小公倍数を出力
  return x/b;
}
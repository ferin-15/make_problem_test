#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using PII = pair<ll, ll>;
#define FOR(i, a, n) for (ll i = (ll)a; i < (ll)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
template<typename T> void chmin(T &a, const T &b) { a = min(a, b); }
template<typename T> void chmax(T &a, const T &b) { a = max(a, b); }
struct FastIO {FastIO() { cin.tie(0); ios::sync_with_stdio(0); }}fastiofastio;
#ifdef DEBUG_ 
#include "../program_contest_library/memo/dump.hpp"
#else
#define dump(...)
#endif
const ll INF = 1LL<<60;

const int MIN_A = 1, MAX_A = 1000;
const int MIN_B = 1, MAX_B = 1000;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    for(int t=0; t<20; ++t) {
        ofstream of(format("02_random_%02d.in", t+1).c_str());
        of << rnd.next(MIN_A, MAX_A) << endl;
        of << rnd.next(MIN_B, MAX_B) << endl;
        of.close();
    }

    return 0;
}
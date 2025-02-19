#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define fi first
#define se second
#define pb push_back
#define pf push_front
#define mp make_pair
#define present(c, x) ((c).find(x) != (c).end())
#define Rep(i, n) for (int i = 0; i < (n); ++i)
#define Repd(i, n) for (int i = (n)-1; i >= 0; --i)
#define For(i, a, b) for (int i = (a); i <= (b); ++i)
#define Ford(i, a, b) for (int i = (a); i >= (b); --i)
#define Trav(i,v) for(auto i: v)
#define Travd(i,v) for(auto i = (v).rbegin(); i != (v).rend(); ++i)
#define all(a) (a).begin(), (a).end()
#define rall(x) (x).rbegin(), (x).rend()  //reverse traversal
#define ms(a,x) memset(a, x, sizeof(a))
#define Unique(v) Sort(v); (v).resize(unique(all(v)) - (v).begin())

template<class F, class T> T convert(F a, int p = -1) { stringstream ss; if (p >= 0) ss << fixed << setprecision(p); ss << a; T r; ss >> r; return r; }
template<class T> T gcd(T a, T b){ T r; while (b != 0) { r = a % b; a = b; b = r; } return a;} //UCLN
template<class T> T lcm(T a, T b) { return a / gcd(a, b) * b; } //BCNN
template<class T> T sqr(T x) { return x * x; }
template<class T> T cube(T x) { return x * x * x; }
template<class T> int getbit(T s, int i) { return (s >> i) & 1; }
template<class T> T onbit(T s, int i) { return s | (T(1) << i); }
template<class T> T offbit(T s, int i) { return s & (~(T(1) << i)); }
template<class T> int cntbit(T s) { return s == 0 ? 0 : cntbit(s >> 1) + (s & 1); }

const ld PI = acos(-1.0);
const ld EPS = 1e-9;
const int INF = (int)1e9 + 5;
const ll LINF = (ll)1e16 + 5;
const ll MOD = (ll)1e9 + 7; //Modulo

const int dr[] = {-1, 0, +1, 0};
const int dc[] = {0, +1, 0, -1};

/*      Begin   : Declare global input        */
int N, ith, fine;
struct job {
    float ef;
    int index;
    job(){}
    job(float EF, int id): ef(EF), index(id) {}
    inline bool operator <(job const &that) const{
        if(ef == that.ef) return index < that.index;
        else return ef > that.ef;
    }
};
vector<job> Jobs;
/*      END     : Declare global input        */




int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T; cin >> T;
    while(T--){
        cin >> N;
        Jobs.clear();
        Rep(i, N){
            cin >> ith >> fine;
            Jobs.pb( job( (float)fine/ith, i+1));
        }
        sort(all(Jobs));
        Rep(i, Jobs.size()-1){
            // cout << it.ef << "   "<<it.index << " \n";
            cout <<Jobs[i].index << " ";
        }
        cout <<Jobs[Jobs.size()-1].index<<'\n';
        if(T) cout << "\n";
    }

    return 0;
}
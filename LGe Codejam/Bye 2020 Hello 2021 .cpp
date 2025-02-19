#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

/****** Template of MACRO/CONSTANT *****/
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<ii> vii;

#define fi first
#define se second
#define pb push_back
#define pf push_front
#define mp make_pair
#define present(count, x) ((count).find(x) != (count).end())
#define Rep(i, n) for (int i = 0; i < (n); i++)
#define Repd(i, n) for (int i = (n)-1; i >= 0; --i)
#define For(i, a, b) for (int i = (a); i <= (b); ++i)
#define Ford(i, a, b) for (int i = (a); i >= (b); --i)
#define Trav(i,v) for(auto i: v)
#define Travd(i,v) for(__typeof((v).rbegin()) i = (v).rbegin(); i != (v).rend(); ++i)
#define ms(a, x) memset(a, x, sizeof(a))
#define Val(a, b) typeof(b) a(b)
#define all(a) (a).begin(), (a).end()
#define rall(x) (x).rbegin, (x).rend()  //reverse traversal
#define ms(a,x) memset(a, x, sizeof(a))
#define sz(a) ((int)(a).size())
#define last(a) (a)[sz(a)-1]

#define Sort(a) sort(all(a))
#define GSort(a) sort(all(a), greater<typeof(*((x).begin()))>()>)
#define Unique(v) Sort(v); (v).resize(unique(all(v)) - (v).begin())
#define Enum(v) Trav(it, (v)) cout << *it << " "; cout << endl

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
const int dr[] = {-1, 0, +1, 0};
const int dc[] = {0, +1, 0, -1};
const int INF = (int)1e9 + 5;
const ll LINF = (ll)1e16 + 5;
const ll MOD = (ll)1e9 + 7;


int main () {
    // For Cin/Cout
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    long sum[12] = {202021,20202021,202002021,202012021,202022021,202032021,202042021,202052021,202062021,202072021,202082021,202092021};
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        unordered_map<long,long> HMap;
        long t;
        for (int i = 0; i < N; ++i) {
            cin >> t;
            HMap[t]++;
        }
        long count = 0;
        long tmp = 0;
        for (int i = 0; i < 12; ++i) {
            for (auto it = HMap.begin(); it != HMap.end(); ++it) {
                tmp = sum[i] - (it->first);
                if (tmp != it->first) {
                    if (HMap.count(tmp)) count += (HMap[tmp] * (it->second));
                }
                else {
                    count += (it->second)*(it->second - 1)/2;
                }
            }
        }
        cout << count/2 << endl;
    }
    return 0;
}
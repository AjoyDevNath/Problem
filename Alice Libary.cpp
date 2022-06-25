
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define INF 1e18
#define ss second
using namespace std;
using namespace __gnu_pbds;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define clr(cnt, x) memset((cnt), (x), sizeof(cnt))
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pair<int,int> > vii;
typedef pair<int, int> pii;
typedef vector<bool> vbl;
typedef vector<pair<ll,ll> > vll;
typedef pair<ll, ll> pll;

#define PQ priority_queue
#define ff first
#define ss second
#define MP make_pair
#define MT make_tuple
#define mxN (int)2e5 + 2
#define sz(n) (int)(n).size()
#define fasterIO ios::sync_with_stdio(0); cin.tie(0);
#define forc(cn) for(auto &x : (cn))
#define findc(cn, abc) ((cn).find(abc) != (cn).end())

//#define PI (2*acos(0))
#define MAXN 200010
//#define torad(x) (x) * ((2*acos(0))/180.0)
const int mod = 1e9 + 7;
#define eps 1e-15

#define todeg(x) ((x) * ((2*acos(0))/180.0))
//#define torad(x) ((x) * (180.0/(2*acos(0))))
//#define PI 2 * acos(0)

const int md = 1e9 + 7;
const double PI = acos(-1.0);




template <typename PB>
using ordered_set = tree<PB,null_type,less_equal<PB>,rb_tree_tag,tree_order_statistics_node_update> ;
//const ll mod = 1e9+7;

int lg2(const int &x)
{
    return 31 - __builtin_clz(x);
}
ll bigMod(ll a,ll b)
{
    a%=mod;
    ll res=1;
    while(b>0)
    {
        if(b&1)res=(res*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return res;
}
inline ll MOD(ll a)
{
    return (a%mod + mod) %mod ;
}
inline ll modAdd(ll a,ll b)
{
    return MOD( MOD(a) + MOD(b) ) ;
}
inline ll modSub(ll a,ll b)
{
    return MOD( MOD(a) - MOD(b) ) ;
}
inline ll modMul(ll a,ll b)
{
    return MOD( MOD(a) * MOD(b) ) ;
}
inline ll modInv(ll a)
{
    return bigMod(a,mod-2) ;
}
inline ll modDiv(ll a,ll b)
{
    a=MOD(a);
    b=modInv(b);
    return (a*b)%mod;
}


double toDegreeFromMinutes(double minutes)
{
    return (minutes/60);//eyta buji naybro!!
}



double toRadian(double degree)
{
    return (degree * PI / 180.0);
}

int comp_double(double a,double b)
{
    if(fabs(a-b) <= 1e-10)
    {
        //retrun 0;
    }

    return a < b ? -1 : 1;
}


ll power(ll base,ll power)
{
    ll result = 1;


    while(power)
    {
        if(power % 2 == 1)
        {
            result = (result * base)%md;
            power--;
        }
        else
        {
            base = (base * base)%md;
            power = power / 2;
        }
    }

    return result ;
}

//prime_checking

bool is_prime(ll sum)
{
    for(int i=2; i<sum; i++)
    {
        if(sum % i == 0)
        {
            return true;
        }
    }
    return false;
}

//binary_To_Decimal

ll binaryToDecimal(ll number)
{
    ll num = number;//1010
    ll dec_value = 0;//0
    ll base = 1;//1

    ll temp = num;//1010


    while(temp)
    {
        ll last_digit = temp % 10;
        temp = temp / 10;

        dec_value += (last_digit * base);
        base = base * 2;
    }

    return dec_value;
}



ll lcm(ll a, ll b)
{
    return (a * (b /__gcd(a, b)));
}

ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}

int d1[]= {-1,0,-1},d2[]= {0,1,1},n,m;
int k1[]= {0,1,1},k2[]= {-1,-1,0};

bool f(int i,int j)
{
    return i>=0 && i<n && j>=0 && j<m;
}

void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

void print(vector<int> vec)
{
    for(int i = 0 ; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
}

bool isPrime(ll n)
{
    if(n < 2)
    {
        return false;
    }

    bool prime_number[1000000+1];//

    memset(prime_number,true,sizeof(prime_number));

    for (ll i = 2; i * i <= 1000000; i++)
    {
        if (prime_number[i] == true)
        {
            for (ll j = i * i; j <= 1000000+1; j += i)
            {
                prime_number[j] = false;
            }
        }
    }

    if(prime_number[n])
    {
        return true;
    }

    return false;
}

void solve()
{
    string str;
    cin>>str;
    stack<char>st;
    int size = str.size();

    for(int i = 0; i < size ; i++)
    {
        string s = "";
        if(str[i] == '/' or str[i] >= 'a' && str[i] <= 'z')
        {
            st.push(str[i]);
        }
        else
        {
            while(st.top() != '/')
            {
                s = s + st.top();
                st.pop();
            }
            st.pop();

            for(int i = 0 ;i < s.size();i++)
            {
                st.push(s[i]);
            }
        }
    }

    string s = "";

    while(!st.empty())
    {
        s = s + st.top();
        st.pop();
    }

    reverse(s.begin(),s.end());
    cout<<s<<"\n";
}


int main()
{
    //init_code();
    fastIO();
    solve();
}

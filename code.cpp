// ALICE'S LIBRARY
// TIME COMPLEXITY:- O(N^2)
// SPACE COMPLEXITY:- O(N)

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(),(v).end()
#define pii pair<ll,ll>
#define vii vector<pii>
#define calc_fact(n) tgamma(n+1)
#define inf LONG_LONG_MAX
#define MOD 1000000007
#define mod 998244353

signed main()
{
	FIO;

	string s;
	cin>>s;

	ll n = s.length();

	stack<char> st;

	for(ll i=0;i<n;i++)
	{
		if(s[i]=='/' or (s[i]>='a' and s[i]<='z'))
		{
			st.push(s[i]);
		}
		else
		{
			// reverse the string upto '/' in stack

			string temp = "";

			while(st.top()!='/')
			{
				temp+=st.top();
				st.pop();
			}

			// remove '/' from stack's top
			st.pop();

			for(ll j=0;j<temp.length();j++)
			{
				st.push(temp[j]);
			}
		}
	}

	string ans = "";

	while(!st.empty())
	{
		ans+=st.top();
		st.pop();
	}

	reverse(all(ans));

	cout<<ans;

}

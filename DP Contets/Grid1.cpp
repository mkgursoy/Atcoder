/*
    Author:Matkap(prefixsumenjoyer23)
    
*/

#include <bits/stdc++.h>
#include <array>

using namespace std;

#define fr freopen("/Users/metinkasim/Documents/in.txt","r",stdin);freopen("/Users/metinkasim/Documents/out.txt","w",stdout);
#define int long long
#define endl "\n"
#define ar array
#define all(x) x.begin(),x.end()

int INF = 1e18;

void setIO(string name = "") 
{
	if (name.size())
	{
		freopen((name + ".in").c_str(), "r", stdin); // see /general/input-output
		freopen((name + ".out").c_str(), "w", stdout);
	}
}
int binpow(int base,int power)
{
	if(power == 1) return base;
	if(power == 0) return 1;
    
     if(power%2==1)
     {
     	 int a;
     	a = binpow(base,(power-1)/2);
     	return a*a*base;
     } 
     else
     {
     	 int a;
     	a = binpow(base,power/2);
     	return a*a;
     } 

}
const int mxN = 1e3 + 7 , mod = 1e9 + 7;
int dp[mxN][mxN];
void solve()
{
   	int n,m;
   	cin >> n >> m;
   	string s[n];
   	for(int i = 0;n > i;i++) cin >> s[i];
   	if(s[0][0] == '.') dp[1][1] = 1;
   	for(int i = 1;n >= i;i++)
   	{
   		for(int j = 1;m >= j;j++)
   		{
   			if(s[i-1][j-1] == '#') continue;
   			dp[i][j] += dp[i-1][j] + dp[i][j-1];
   			dp[i][j] %= mod;
   		}
   	}
   	cout << dp[n][m] << endl;
}



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	//fr

	int t;
	t=1;
	//cin >> t;
	while(t--) solve();

}
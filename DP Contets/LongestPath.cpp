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
const int mxN = 1e5 + 7;
int dp[mxN];
vector<int> adj[mxN];
int vis[mxN];
void dfs(int pos)
{
	vis[pos] = 1;
	for(auto it : adj[pos])
	{
		if(!vis[it])
		dfs(it);
		dp[pos] = max(dp[pos] , dp[it] + 1);
	}
}
void solve()
{
   	int n,m;
   	cin >> n >> m;
   	while(m--)
   	{
   		int x,y;
   		cin >> x >> y;
   		adj[x].push_back(y);
   	}
   	for(int i = 1;n >= i;i++)
   	{
   		if(!vis[i]) dfs(i);
   	}
   	cout << *max_element(dp,dp+n+1);
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
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
const int mxV = 1e5 + 7 , mxN = 1e2 + 7;
vector<int> old_dp(mxV+1,INF);
vector<int> new_dp(mxV+1,INF);
void solve()
{
   	int n,m;
   	cin >> n >> m;
   	int v[n];
   	int w[n];
   	int vToplam = 0;
   	for(int i = 0;n > i;i++) cin >> w[i] >> v[i] , vToplam += v[i];
   	int ans = 0;
   	old_dp[0] = 0;
   	for(int i = 0;n > i;i++)
   	{
   		new_dp = old_dp;
   		for(int j = v[i];mxV >= j;j++)
   		{
   			new_dp[j] = min(new_dp[j] , old_dp[j-v[i]] + w[i]);
   		}
   		old_dp = new_dp;
   	}
   	for(int i = 0;vToplam >= i;i++)
   	{
   		//cout << old_dp[i] << " " << i << endl;
   		if(m >= old_dp[i]) ans = i;
   	}
   	cout << ans << endl;
}



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	//fr

	int t;
	t=1;
//	cin >> t;
	while(t--) solve();

}
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
const int mxN = 1e5 + 5;
int dp[mxN];
void solve()
{
   	int n,k;
   	cin >> n >> k;
   	int a[n];
   	int dp[n+1];
   	for(int i = 0;n > i;i++) cin >> a[i];
   	for(int i = 0;n >= i;i++) dp[i] = 0;
   	for(int i = 2;n >= i;i++)
   	{
   		dp[i] = INF;
   		for(int j = 1;k >= j;j++)
   		{
   			if(i-j == 0) break;
   			dp[i] = min(dp[i] , dp[i-j] + abs(a[i-1] - a[i-j-1]));
   		}
   	}
   	cout << dp[n] << endl;
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
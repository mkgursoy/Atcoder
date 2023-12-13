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
void solve()
{
   	int n;
   	cin >> n;
   	ar<int,3> a[n];
   	ar<int,3> dp[n+1];
   	for(int i = 0;n > i;i++) cin >> a[i][0] >> a[i][1] >> a[i][2];
   	dp[0] = a[0];
   	for(int i = 1;n > i;i++)
   	{
   		dp[i][0] = max(dp[i-1][1] , dp[i-1][2]) + a[i][0];
   		dp[i][1] = max(dp[i-1][0] , dp[i-1][2]) + a[i][1];
   		dp[i][2] = max(dp[i-1][0] , dp[i-1][1]) + a[i][2];
   	}
   	cout << max({dp[n-1][0] , dp[n-1][1] , dp[n-1][2]}) << endl;
}



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//	fr

	int t;
	t=1;
	//cin >> t;
	while(t--) solve();

}
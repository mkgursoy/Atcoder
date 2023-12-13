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
const int mxN = 3001;
double dp[mxN][mxN];
void solve()
{
   	int n;
   	cin >> n;
   	double a[n];
   	for(int i = 0;n > i;i++) cin >> a[i];
   	dp[0][0] = 1;
   	for(int i = 1;n >= i;i++)
   	{
   		for(int j = i;j >= 0;j--)
   		{
   			dp[i][j] = dp[i-1][j-1] * a[i-1] + dp[i-1][j] * (1 - a[i-1]);
   		}
   	}
   	double sum = 0;
   	for(int i = (n+1)/2;n >= i;i++) sum += dp[n][i];
   	cout << setprecision(10) << sum << endl;
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
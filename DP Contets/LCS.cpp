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
   	string a,b;
   	cin >> a >> b;
   	a = "-" + a;
   	b = "-" + b;
   	int n = a.size();
   	int m = b.size();
   	int dp[n][m];
   	//Base Case:
   	for(int i = 0;n > i;i++) dp[i][0] = 0;
   	for(int i = 0;m > i;i++) dp[0][i] = 0;
   	for(int i = 1;n > i;i++)
   	{
   		for(int j = 1;m > j;j++)
   		{
   			dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
   			if(a[i] == b[j]) dp[i][j] = max(dp[i][j] , dp[i-1][j-1] + 1);
   		}
   	}
   	string ans = "";
   	int lb = n-1,rb = m-1;
   	while(lb > 0 && rb > 0)
   	{
   		if(a[lb] == b[rb])
   		{
   			ans = ans + a[lb];
   			lb--;
   			rb--;
   		} 
   		else
   		{	
   			if(dp[lb-1][rb] == dp[lb][rb]) lb--;
   			else
   				rb--;
   		}
   	}
   	reverse(all(ans));
   	cout << ans << endl;
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
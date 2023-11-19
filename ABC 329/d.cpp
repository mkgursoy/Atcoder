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
const int mxN = 2 * 1e5 + 5;
int a[mxN];
void solve()
{
   	int n,m;
   	cin >> n >> m;
   	int mx = 0;
   	while(m--)
   	{
   		int x;
   		cin >> x;
   		a[x] += 1;
   		if(a[x] > a[mx])
   		{
   			mx = x;

   		}
   		else if(a[x] == a[mx])
   		{
   			mx = min(mx,x);
   		}
   		cout << mx << " ";

   	}
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
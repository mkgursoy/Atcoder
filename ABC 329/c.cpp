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
int alf[26];
void solve()
{
   	int n;
   	cin >> n;
   	string a;
   	cin >> a;
   	int tmp = 0;
   	int ans = 0;
   	for(int i = 0;n-1 > i;i++)
   	{
   		tmp += 1;
   		if(a[i] != a[i+1]) ans += max(0ll,tmp - alf[a[i] - 'a']) , alf[a[i] - 'a'] = max(alf[a[i] - 'a'],tmp) , tmp = 0;
   	}
   	tmp += 1;
   	ans += max(0ll,tmp - alf[a[n-1] - 'a']);
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
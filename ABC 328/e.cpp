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

__int128 mxn = 1e25;
int mnn = -mxn;

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
   	int n,m,k;
   	cin >> n >> m >> k;
   	
	vector<ar<int,3>> edges;
	for(int i = 0;m > i;i++)
   	{
   		int x,y,z;
   		cin >> x >> y >> z;
   		edges.push_back({x,y,z%k});
   	}
   	__int128 mincost = mxn;

   	do
   	{
   		__int128 cost = 0;
		int dsu[n];
		for (int i = 0; i < n; i++)
    	dsu[i] = i;

		for (auto e : edges) 
		{
    		if (dsu[e[0]] != dsu[e[1]])
    		{
        		cost += e[2];
        		cost %= k;
        	
        		for (int i = 0; i < n; i++) 
        		{
            		if(dsu[i] == e[0])
                		dsu[i] = e[1];
        		}
    		}
		}
		mincost = min(mincost,cost);
   	}
	while(next_permutation(all(edges)));

	cout << (int)mincost << endl;
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
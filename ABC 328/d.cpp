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

int mxn = 1e18;
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
   	string s;
   	cin >> s;
   	int n = s.size();
   	int point[n+500];
   	int rpoint[n+500];
   	
   	for(int i = 0;n+499 >= i;i++)
   	{
   		point[i] = i+1;
   	}
   	for(int i = n+499;i >= 0;i--)
   	{
   		rpoint[i] = i-1;
   	}
   	
   	for(int i = 0;n > i;i = point[i+1] - 1)
   	{
   		//cout << rpoint[rpoint[i+1]] - 1 << " " << rpoint[i+1]-1 << " " << i << endl;
   		if(rpoint[rpoint[i+1]] - 1 < 0 || rpoint[i+1]-1 < 0) continue;	
   		if(s[rpoint[rpoint[i+1]] - 1] == 'A' && s[rpoint[i+1]-1] == 'B' && s[i] == 'C')
   		{
   			point[rpoint[rpoint[rpoint[i+1]]]] = point[i+1];
   			rpoint[point[i+1]] = rpoint[rpoint[rpoint[i+1]]];
   			
   			
   		}
   		
   	}
   	for(int i = point[0];n >= i;i = point[i])
   	{
   		cout << s[i-1];
   	}

   	
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
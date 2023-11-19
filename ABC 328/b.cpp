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
bool ok(long long n)
{
	bool f = true;
	int yes = n%10;
	while (n != 0) 
	{ 
		if(n%10 != yes)
       	{
       		f = !f;
       		break;
       	}
        n = n / 10; 

    } 

    
    return f;
}
int countDigit(long long n) 
{ 
    if (n == 0) 
        return 1; 
    int count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
} 
int ans1(long long length,long long i)
{
	int ans = 0;
	while(length >= 0)
	{
		ans += i * pow(10,length);
		length--;
	}

	return ans;
}
void solve()
{
   	int n;
   	cin >> n;
   	int ans = 0;
   	for(int i = 0;n > i;i++)
   	{
   		int x;
   		cin >> x;
   		if(!ok(i+1)) continue;
   		//cout << i << " " << ans1(countDigit(x)-1,(i+1)%10) << endl;	
   		if(ans1(countDigit(x)-1,(i+1)%10) <= x) ans += countDigit(x);
   		else
   			ans += countDigit(x) - 1;
   		
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
	//cin >> t;
	while(t--) solve();

}
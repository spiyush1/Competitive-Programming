#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
#define ar array
#define pb push_back
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	vector<int> x(n), y(n);
	for(int i = 0; i<n; i++)
	{
		cin>>x[i];
		cin>>y[i];
	}
	vector<int> x3(x),y3(y);
	sort(x.begin(),x.end());
	sort(y.begin(),y.end());
	ll l1,r1,l2,r2,ans = (ll)1e20;
	for(int lx = 0; lx<n; lx++)
		for(int rx = lx+1;rx<n; rx++)
			for(int ly = 0; ly<n; ly++)
				for(int ry = ly+1; ry<n; ry++)
				{
					l1 = x[lx];
					l2 = x[rx];
					r1 = y[ly];
					r2 = y[ry];
					int num = 0;
					for(int i = 0; i<n; i++)
					{
						if(l1<=x3[i] and l2>=x3[i] and r1<=y3[i] and r2>=y3[i])
							num++;
					}
					if(num>=k) ans = min(ans,(l2-l1)*(r2-r1));
				}
	cout<<ans<<endl;
	return 0;
}

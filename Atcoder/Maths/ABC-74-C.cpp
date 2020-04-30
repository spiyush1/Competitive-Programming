//Real mess!!
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
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	ll ans1= 0, ans2 = 0;
	for(int i = 0; i<=30; i++)
		for(int j = 0; j<=30; j++)
		{
			ll y = 100*(i)*a+j*100*b;
			for(int k = 0; k<=100; k++)
				for(int h = 0; h<=100; h++)
				{
					ll sugar = c*k+d*h;
					if(y+sugar<=f && (e*y/100)>=sugar)
					{
						if(ans1>0 && (double(sugar)/(y+sugar))>(double(ans2)/ans1))
						{
							ans1 = y+sugar; ans2 = sugar;
						}
						else if(ans1==0)
						{
							ans1 = y+sugar; ans2 = sugar;
						}
					}
				}
		}

	cout<<ans1<<" "<<ans2<<endl;
	return 0;
}

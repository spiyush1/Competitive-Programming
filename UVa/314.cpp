#include<bits/stdc++.h>
#define ll long long int
#define ar array
#define pb push_back
#define input(arr,n) for(int i = 0; i<n; i++) cin>>arr[i]
const int mod = 1e9+7;
ll power(ll a,ll b){ll r=1;for(;b;b>>=1){if(b&1)r=r*a%mod;a=a*a%mod;}return r;}
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int x[] = {0,0,1,-1};
	int y[] = {1,-1,0,0};
	int n, m, r1 = 0;
	cin>>n>>m;
	while(n || m)
	{
		r1++;
		int a[n][m];
		for(int i = 0; i<n; i++)
			for(int j = 0; j<m; j++)
				cin>>a[i][j];
		int st, se, dt, de;string s;
		cin>>st>>se>>dt>>de>>s;
		int dir = 0;
		if(s=="south") dir = 0;
		else if(s=="north") dir = 1;
		else if(s=="east") dir = 2;
		else dir = 3;
		queue<ar<int,4>> q;
		q.push({st,se,dir,0});
		bool vis[n][m][4];
		memset(vis,0,sizeof(vis));
		vis[st][se][dir] = 1;
		int ans = -1,x2 = se, y2 = st;
		if(x2<=0 || y2<=0 || x2>m-1 || y2>n-1 || a[y2][x2] || a[y2-1][x2-1] || a[y2-1][x2] || a[y2][x2-1]) goto outer;
		while(!q.empty())
		{
			auto y1 = q.front();
			if(y1[0]==dt && y1[1]==de){ans = y1[3]; break;}
			q.pop();
			for(int i = 0 ;i<4; i++)
			{
				if(i==y1[2])
				{
					int x2 = y1[1], y2 = y1[0]; 
					for(int j = 0; j<3; j++)
					{
						x2 += x[i], y2 += y[i];
						if(x2<=0 || y2<=0 || x2>m-1 || y2>n-1 || a[y2][x2] || a[y2-1][x2-1] || a[y2-1][x2] || a[y2][x2-1]) break;
						if(vis[y2][x2][i]) continue;
						vis[y2][x2][i] = 1;
						q.push({y2,x2,y1[2],y1[3]+1});
					}
				}
				else 
				{
					int x2 = y1[1], y2 = y1[0];
					if(vis[y2][x2][i] || (y1[2]==0 && i==1)||(y1[2]==1 && i==0) ||(y1[2]==2 && i==3)||(y1[2]==3 && i==2))
						continue;
					vis[y2][x2][i] = 1;
					q.push({y2,x2,i,y1[3]+1});
				}
			}
		}
		outer:
		cout<<ans<<'\n';
		cin>>n>>m;
	}
	return 0;
}

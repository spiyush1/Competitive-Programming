//Program implementing Floyd Warshall
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
#define ar array
#define mp make_pair
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n;
	cin>>n>>m;
	int a[n][n];
	memset(a,0x3f,sizeof(a));
	set<array <int,3> >s;
	for(int i = 0;i <n; i++)
		a[i][i]=0;

	for(int i = 0,j,k,c ;i<m;i++)
	{
		cin>>j>>k>>c ,--j, --k;
		a[j][k]= c;
		a[k][j]= c;
		s.insert({j,k,c});
	}

    int ans=m;
	for(int k = 0; k<n;k++)
		for(int i = 0;i <n; i++)
			for(int j = 0; j<n; j++)
				a[i][j] = min(a[i][j],a[i][k]+a[k][j]);
//Both the implementations below work with different time complexity
	// for(auto it:s)
	// {
	// 	for(int i = 0;i<n; i++)
	// 		for(int j =0; j<n; j++)
	// 			if((a[i][it[0]]+a[it[1]][j]+it[2])==a[i][j])
	// 			{
	// 				ans-- ;
	// 				break;
	// 			}
	// }

	for(auto it:s)
	{
		for(int i = 0;i<n;i++)
			if(a[i][it[0]]+it[2]==a[i][it[1]])
			{
				ans--;
				break;
			}
	}
	cout<<ans<<endl;
	return 0;
}

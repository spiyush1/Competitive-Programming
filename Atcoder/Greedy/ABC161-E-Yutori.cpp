//Wasn't expecting greedy to work
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
	int k;
	cin>>k;
	queue<ll> q;
	for(int i = 1;i<10; i++)
		q.push(i);
	k--;
	while(k--)
	{
		ll h = q.front();
		q.pop();
		int g = h%10;
		for(int i =max(g-1,0);i<=min(9,g+1); i++)
			q.push(10*h+i);
	}
	cout<<q.front()<<endl;
	return 0;
}

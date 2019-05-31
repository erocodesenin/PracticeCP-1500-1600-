#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
#include <set>
#include <map>
#include <cstring>
#include <unordered_map>
#define lld long long int
#define DBG1(vari1) cerr<<#vari1<<" = "<<(vari1)<<endl;
#define DBG2(vari1,vari2) cerr<<#vari1<<" = "<<(vari1)<<" "<<#vari2<<" = "<<(vari2)<<endl;
#define DBG3(vari1,vari2,vari3) cerr<<#vari1<<" = "<<(vari1)<<" "<<#vari2<<" = "<<(vari2)<<" "<<#vari3<<" = "<<(vari3)<<endl;
using namespace std;
vector <int> adj[2000];
int visited[2000];
int ans=0;
void dfs(int s)
{
	visited[s]=1;
	for(int i=0;i<adj[s].size();i++)
	{
		if(!visited[adj[s][i]])
			dfs(adj[s][i]);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);  
	int n,m;
	cin >> n >> m;
	int ch=0;
	for(int i=0;i<n;i++)
	{
		int a;
		cin >> a;
		if(a>0)
			ch=1;
		for(int j=0;j<a;j++)
		{
			int x;
			cin >> x;
			adj[i+1].push_back(n+x);
			adj[n+x].push_back(i+1);
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			ans++;
			dfs(i);
		}
	}
	cout << ans-ch;
}
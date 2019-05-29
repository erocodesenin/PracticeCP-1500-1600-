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
vector <int>adj[100005];
int n,m;
bool visited[100005];
lld ans=0;
int arr[100005];
void dfs(int s,int c)
{
	visited[s]=1;
	int p;
	if(arr[s-1]==1)
	{
		c++;
	}
	else
		c=0;
	if(c>m)
		return;
	if(adj[s].size()==1&&s!=1)
	{
		ans++;
	}
	// cout << s << " " << c << "\n";
	for(int i=0;i<adj[s].size();i++)
	{
		if(!visited[adj[s][i]])
		{
			dfs(adj[s][i],c);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);  
	cin >> n >> m;
	for(int i=0;i<n;i++)
		cin >> arr[i];
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	dfs(1,0);
	cout << ans;
}
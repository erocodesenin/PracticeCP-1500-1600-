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
string s[100005][2];
lld dp[100005][2];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);  
	int n;
	cin >> n;
	int arr[n];
	// for(int i=0;i<n;i++)
	// 	cin >> arr[i];
	vector <pair <int,int> > v;
	for(int i=0;i<10;i++)
	{
		int a,b;
		cin >> a >> b;
		v.push_back({a,b});
	}
	for(int i=0;i<10;i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}
	for(int i=0;i<n;i++)
	{
		cin >> s[i][0];
		s[i][1]=s[i][0];
		reverse(s[i][1].begin(),s[i][1].end());
	}
	dp[0][1]=arr[0];
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			dp[i][j]=1e18;
			for(int k=0;k<2;k++)
			{
				if(s[i][j]>=s[i-1][k])
				{
					dp[i][j]=min(dp[i][j],dp[i-1][k]+j*arr[i]);
				}
			}
		}
	}
	lld ans = min(dp[n-1][0],dp[n-1][1]);
	if(ans==1e18)
		cout <<"-1";
	else
		cout << ans;
}
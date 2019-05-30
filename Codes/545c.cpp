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
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);  
	int n;
	cin >> n;
	vector<pair<int,int> > v;
	if(n<=2)
	{
		cout << n;
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin >> a >> b;
		v.push_back(make_pair(a,b));
	}
	int ans=2;
	for(int i=1;i<n-1;i++)
	{
		if(v[i].first-v[i].second>v[i-1].first)
		{
			ans++;
			// cout << v[i].first << " " << v[i].second << "\n";
		}
		else if(v[i].first+v[i].second<v[i+1].first)
		{
			// cout << v[i].first << " " << v[i].second << "\n";
			ans++;
			v[i].first+=v[i].second;
		}
	}
	cout << ans;
}
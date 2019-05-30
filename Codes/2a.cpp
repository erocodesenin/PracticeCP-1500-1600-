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
	unordered_map<string,int> m;
	int mx=-999999999;
	vector <pair<string,int> >  v;
	for(int i=0;i<n;i++)
	{
		string s;
		int x;
		cin >> s >> x;
		v.push_back(make_pair(s,x));
		m[s]+=x;
	}
	for(int i=0;i<n;i++)
	{
		string s=v[i].first;
		mx=max(mx,m[s]);
	}
	unordered_map<string,int> m1;
	// cout << mx;
	// cout << m[]
	for(int i=0;i<n;i++)
	{
		m1[v[i].first]+=v[i].second;
		// cout << m1[v[i].first] << "\n";
		if((m1[v[i].first]>=mx)&&(m[v[i].first]==mx))
		{
			cout << v[i].first;
			return 0;
		}

	}

}
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
	vector <pair<int,int> > v;
	map <int,int> mx;
	map <int,int> my;
	map <pair<int,int> , int> m1;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin >> a >> b;
		v.push_back(make_pair(a,b));
		mx[a]++;
		my[b]++;
		m1[make_pair(a,b)]++;
	}
	lld ans=0;
	for(auto i:mx)
	{
		lld g = (i.second);
		ans+=g*(g-1)/2;
	}
	for(auto i:my)
	{
		lld g = (i.second);
		ans+=g*(g-1)/2;
	}
	for(auto i:m1)
	{
		lld g=i.second;
		ans-=g*(g-1)/2;
	}
	cout << ans;

}
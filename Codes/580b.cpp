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
	int n,d;
	cin >> n >> d;
	vector <pair <int,int> > v;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin >> a >> b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());
	int l=0,r=0;
	lld ans=0;
	lld sum=0;
	while(r<n)
	{
		if(v[r].first-v[l].first>=d)
			ans-=v[l++].second;
		else
			ans+=v[r++].second;
		sum=max(sum,ans);
	}
	cout << sum;

}
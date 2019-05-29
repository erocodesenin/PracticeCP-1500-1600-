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
bool comp(pair<int, int> lhs, pair<int, int> rhs) 
{
	if (lhs.first < rhs.first) {
		return true;
	}
	else if (lhs.first == rhs.first && lhs.second > rhs.second) {
		return true;
	}
	else {
		return false;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);  
	int n;
	cin >> n;
	vector <pair<int,int> > v;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin >> a >> b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
		cout << v[i].first << " " << v[i].second << "\n";
}
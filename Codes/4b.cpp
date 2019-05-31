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
	int d,s;
	cin >> d >> s;
	vector <pair <int,int> > v;
	int sums=0,summ=0;
	for(int i=0;i<d;i++)
	{
		int a,b;
		cin >> a >> b;
		v.push_back(make_pair(a,b));
		summ+=b;
		sums+=a;
	}
	if(s>summ||s<sums)
	{
		cout << "NO";
		return 0;
	}
	cout << "YES\n";
	int t=s-sums;
	for(int i=0;i<d;i++)
	{
		int k=min(v[i].second-v[i].first,t);
		cout << v[i].first+k << " ";
		t-=k;
	}

}
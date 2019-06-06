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
vector <int> adj[1005];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);  
	int n,m;
	cin >> n >> m;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	int sum=0;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin >> a >> b;
		sum+=min(arr[a-1],arr[b-1]);
	}
	cout << sum;
}
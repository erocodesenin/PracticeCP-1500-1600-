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
	/*Had the idea to solve this
	 from watching one of Errichto's videos,
	 Thanks,Errichto*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);  
	int n,q;
	cin >> n >> q;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	sort(arr,arr+n);
	int qa[n+1];
	for(int i=0;i<=n;i++)
		qa[i]=0;
	for(int i=0;i<q;i++)
	{
		int a,b;
		cin >> a >> b;
		a--,b--;
		qa[a]++;
		qa[b+1]--;
	}
	for(int i=1;i<=n;i++)
	{
		qa[i]+=qa[i-1];
		// cout << qa[i] << " ";
	}
	sort(qa,qa+n);
	lld ans=0;
	for(int i=0;i<n;i++)
	{
		ans+=(1ll*qa[i]*arr[i]);
	}
	cout << ans;
}
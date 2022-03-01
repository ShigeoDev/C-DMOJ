#include<bits/stdc++.h>
using namespace std;

int main(){
#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr+n);
	for (int i = 0; i < n; i++) cout << arr[i] << endl;
	return 0;
}

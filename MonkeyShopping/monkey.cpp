#include<bits/stdc++.h>
using namespace std;

int main(){
#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int a, b ,c, d;
	cin >> a >> b >> c >> d;
	if (a < b && c < d){
		cout << "Go to the department store" << "\n";
	}
	else if (a < b) {
		cout << "Go to the grocery store" << "\n";
	}
	else if (c < d) {
		cout << "Go to the pharamacy" << "\n";
	}
	else {
		cout << "Stay home" << "\n";
	}

	return 0;
}

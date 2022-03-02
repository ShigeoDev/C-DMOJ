#include<bits/stdc++.h>
using namespace std;

int main(){
#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string str;
	getline(cin, str);
	cout << "Ready" << "\n";
	while(str != "  "){
		if (str  == "db" || str  == "bd" || str  == "pq" || str  == "qp"){
			cout << "Mirrored pair" << "\n";
		}
		else {
			cout << "Ordinary pair" << "\n";
		}
		getline(cin, str);
	}
	return 0;
}


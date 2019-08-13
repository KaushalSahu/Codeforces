#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, j, k, x;
	string st;
	char ch;
	cin >> n;
	k = 0, j = 9;
	vector<int> rooms(10, 0);
	cin >> st;
	for (int i = 0; i < n; i++) {
		ch = st.at(i);
		if (ch == 'L') {
			for (x = 0; rooms[x] != 0; x++);
			rooms[x] = 1;
		}
		else if (ch == 'R') {
			for (x = 9; rooms[x] != 0; x--);
			rooms[x] = 1;
		}
		else {
			int x = (int)ch - '0';
			rooms[x] = 0;
		}
	}
	for (int i = 0; i < rooms.size(); i++)
		cout << rooms[i];

return 0;
}
// 551A
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, t, i, j, min = INT_MAX, newmin, s, d, pos=0;
	cin >> n >> t;

	for(i = 1; i <= n; i++){

		cin >> s >> d;

		for(j = s; j < t; j+=d);
		newmin = abs(t - j);

		if(newmin < min){
		min = newmin;
		pos = i;
		}
	}
	cout << pos;
}

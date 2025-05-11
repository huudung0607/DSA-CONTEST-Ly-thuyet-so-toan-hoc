
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	long long cnt2 = 0, cnt5 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		while (a[i] % 2 == 0 && a[i] > 0) {
			cnt2++;
			a[i]/= 2;
		}
		while (a[i] % 5 == 0 && a[i] > 0) {
			cnt5++;
			a[i] /= 5;
		}
	}
	cout << min(cnt2, cnt5);
}


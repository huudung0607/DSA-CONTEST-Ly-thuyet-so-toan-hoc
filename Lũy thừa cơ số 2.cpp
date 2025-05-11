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
	long long n;
	cin >> n;
	while (n % 2 == 0 && n != 1) {
		n /= 2;
	}
	if (n == 1) {
		cout << "YES";
	}
	else cout << "NO";
}

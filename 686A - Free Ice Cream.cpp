#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cassert>
#include <algorithm>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <bitset>

#pragma comment(linker, "/STACK:256000000")

using namespace std;

typedef long long int int64;
typedef long double double80;

const int INF = (1 << 29) + 5;
const int64 LLINF = (1ll << 59) + 5;
const int MOD = 1000 * 1000 * 1000 + 7;

const int MAX_N = 1005;

int n, x, sad;
int64 answer;

int main()
{
	scanf("%d %d\n", &n, &x);

	answer = x;
	sad = 0;

	int cur;
	char type;
	for (int i = 0; i < n; ++i)
	{
		scanf("%c %d\n", &type, &cur);
		if (type == '+')
		{
			answer += cur;
		}
		else if (answer >= cur)
		{
			answer -= cur;
		}
		else
		{
		    ++sad;
		}
	}

	cout << answer << " " << sad << "\n";

	fclose(stdin);
	fclose(stdout);

	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
struct rec
{
	int w, h;
};
rec a[6];
bool cmp(const rec &a, const rec &b)
{
	return a.w == b.w ? a.h < b.h : a.w < b.w;
}
bool check()
{
	if (a[0].w != a[1].w||a[0].h != a[1].h)
		return false;
	if (a[2].w != a[3].w||a[2].h != a[3].h)
		return false;
	if (a[4].w != a[5].w||a[4].h != a[5].h)
		return false;
	if (a[0].h != a[2].h||a[0].w != a[4].h||a[2].w != a[4].w)
		return false;
	return true;
}
int main()
{
    freopen("1587.in","r", stdin);
    freopen("1587.out","w", stdout);	
	while (cin>>a[0].w>>a[0].h)
	{
		if (a[0].w < a[0].h)
			swap(a[0].w, a[0].h);
		for (int i = 0; i < 5; ++i)
		{
			cin >> a[i + 1].w >> a[i + 1].h;
			if (a[i + 1].w < a[i + 1].h)
				swap(a[i + 1].w, a[i + 1].h);
		}
		sort(a, a + 6, cmp);
		if (!check())
			cout << "IMPOSSIBLE" << endl;
		else
			cout << "POSSIBLE" << endl;
	}
}

#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int n, k, p,b[50005];
queue<int> card;

int main()
{
	cin >> n >> k >> p;
	for (int i = 1; i <= k; i++)
		card.push(i);
	int now = 1, cnt = 0;
	while (true)
	{
		if (now++ % n == 0)
		{
			b[++cnt] = card.front();
			if (cnt == k / n)
				break;
		}
		card.pop();
		for (int i = 1; i <= p; i++)
		{
			card.push(card.front());
			card.pop();
		}
	}
	sort(b + 1, b + cnt + 1);
	for (int i = 1; i <= cnt; i++)
		cout << b[i] << endl;
	return 0;
}
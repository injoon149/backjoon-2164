#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> q;
	int n = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}
	while (1)
	{
		if (q.size() == 1) break;
		else
		{
			q.pop();
			int k = q.front();
			q.pop();
			q.push(k);

			

		}
	}

	cout << q.front() << endl;

	return 0;
}
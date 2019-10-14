# DFS

## \[백준\]\[1260\] DFS와 BFS

### 문제

그래프를 DFS로 탐색한 결과와 BFS로 탐색한 결과를 출력하는 프로그램을 작성하시오. 단, 방문할 수 있는 정점이 여러 개인 경우에는 정점 번호가 작은 것을 먼저 방문하고, 더 이상 방문할 수 있는 점이 없는 경우 종료한다. 정점 번호는 1번부터 N번까지이다.

### 입력

첫째 줄에 정점의 개수 N\(1 ≤ N ≤ 1,000\), 간선의 개수 M\(1 ≤ M ≤ 10,000\), 탐색을 시작할 정점의 번호 V가 주어진다. 다음 M개의 줄에는 간선이 연결하는 두 정점의 번호가 주어진다. 어떤 두 정점 사이에 여러 개의 간선이 있을 수 있다. 입력으로 주어지는 간선은 양방향이다.

### 출력

첫째 줄에 DFS를 수행한 결과를, 그 다음 줄에는 BFS를 수행한 결과를 출력한다. V부터 방문된 점을 순서대로 출력하면 된다.

### 코드

```text
input
4 5 1
1 2
1 3
1 4
2 4
3 4

output
1 2 4 3
1 2 3 4
```

```cpp
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define N_MAX 1001 
#define M_MAX 10000 

enum E_STATUS
{
	eNone,
	eQue,
	eVisit,
	eMax
};

int map[N_MAX][N_MAX] = { 0, };
int visit[N_MAX] = { 0, };
int N, M;

void dfs(int V)
{
	visit[V] = 1;
	cout << V << " ";

	for (int i = 1; i <= N; i++)
	{
		if (map[V][i] == 1 && visit[i] == 0)
		{
			dfs(i);
		}		
	}
}


void bfs(int V)
{

	queue<int> que;	
	que.push(V);
	memset(visit, 0x00, sizeof(visit));

	while (!que.empty())
	{
		int out = que.front();
		que.pop();
		visit[out] = eVisit;
		
		cout << out << " ";

		for (int i = 1; i <= N; i++)
		{
			// Vistit x , map에 있는 것 안되고 
			if (visit[i] == eNone && map[out][i] == 1)
			{
				visit[i] = eQue;
				que.push(i);
			}
		}

	}


}

int main()
{

	int  V;
	cin >> N >> M >> V;

	for (int i = 0; i < M; i++)
	{
		int x, y;
		cin >> x >> y;

		map[x][y] = 1;

	}

	dfs(V); cout << endl;
	bfs(V); cout << endl;

	
 	return 0;
}
```


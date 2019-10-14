# DFS & BFS

## \[백준\]\[1012\] 유기농 배

### 문제

차세대 영농인 한나는 강원도 고랭지에서 유기농 배추를 재배하기로 하였다. 농약을 쓰지 않고 배추를 재배하려면 배추를 해충으로부터 보호하는 것이 중요하기 때문에, 한나는 해충 방지에 효과적인 배추흰지렁이를 구입하기로 결심한다. 이 지렁이는 배추근처에 서식하며 해충을 잡아 먹음으로써 배추를 보호한다. 특히, 어떤 배추에 배추흰지렁이가 한 마리라도 살고 있으면 이 지렁이는 인접한 다른 배추로 이동할 수 있어, 그 배추들 역시 해충으로부터 보호받을 수 있다.

\(한 배추의 상하좌우 네 방향에 다른 배추가 위치한 경우에 서로 인접해있다고 간주한다\)

한나가 배추를 재배하는 땅은 고르지 못해서 배추를 군데군데 심어놓았다. 배추들이 모여있는 곳에는 배추흰지렁이가 한 마리만 있으면 되므로 서로 인접해있는 배추들이 몇 군데에 퍼져있는지 조사하면 총 몇 마리의 지렁이가 필요한지 알 수 있다.

예를 들어 배추밭이 아래와 같이 구성되어 있으면 최소 5마리의 배추흰지렁이가 필요하다.

\(0은 배추가 심어져 있지 않은 땅이고, 1은 배추가 심어져 있는 땅을 나타낸다.\)

| **1** | **1** | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | **1** | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 0 | 0 | 0 | 0 | **1** | 0 | 0 | 0 | 0 | 0 |
| 0 | 0 | 0 | 0 | **1** | 0 | 0 | 0 | 0 | 0 |
| 0 | 0 | **1** | **1** | 0 | 0 | 0 | **1** | **1** | **1** |
| 0 | 0 | 0 | 0 | **1** | 0 | 0 | **1** | **1** | **1** |

### 입력

입력의 첫 줄에는 테스트 케이스의 개수 T가 주어진다. 그 다음 줄부터 각각의 테스트 케이스에 대해 첫째 줄에는 배추를 심은 배추밭의 가로길이 M\(1 ≤ M ≤ 50\)과 세로길이 N\(1 ≤ N ≤ 50\), 그리고 배추가 심어져 있는 위치의 개수 K\(1 ≤ K ≤ 2500\)이 주어진다. 그 다음 K줄에는 배추의 위치 X\(0 ≤ X ≤ M-1\), Y\(0 ≤ Y ≤ N-1\)가 주어진다.

### 출력

각 테스트 케이스에 대해 필요한 최소의 배추흰지렁이 마리 수를 출력한다.



```text
input
2
10 8 17
0 0
1 0
1 1
4 2
4 3
4 5
2 4
3 4
7 4
8 4
9 4
7 5
8 5
9 5
7 6
8 6
9 6
10 10 1
5 5

output
5
1
```

```cpp

// 틀린 TC가 있기때문에 다시해야함.

#include <iostream>
#include <string.h>
#include <vector>
#define N_MAX 50

using namespace std;

int map[N_MAX][N_MAX] = { 0, };
int visit[N_MAX][N_MAX] = { 0, };
int dir[4][2] = { {1,0}, {0,1}, {-1,0}, {0,-1} };
int N , M , STEP = 0;

void bfs(int x, int y )
{
	visit[x][y] = STEP;

	for (int i = 0; i < 4; i++)
	{
		int x_add = dir[i][0] + x;
		int y_add = dir[i][1] + y;

		if (y_add < 0 || y_add >= N || x_add < 0 || x_add >= M)
		{
			continue;
		}

		if (visit[x_add][y_add] == 0 && map[x_add][y_add] == 1)
		{
			bfs(x_add, y_add);
		}
	}	
	
}

int main()
{
	int nCase;
	vector<int> vtResult;
	cin >> nCase;


	// INSERT 
	for (int n = 0; n < nCase; n++)
	{
		memset(map, 0x00, sizeof(map));
		memset(visit, 0x00, sizeof(visit));
		STEP = 0;

		int  c;
		cin >> N >> M >> c;

		for (int i = 0; i < c; i++)
		{
			int x, y;
			cin >> x >> y;
			map[x][y] = 1;
		}

		for (int nW = 0; nW < M; nW++)
		{
			for (int nH = 0; nH < N; nH++)
			{
				if (visit[nW][nH] == 0 && map[nW][nH] == 1)
				{
					STEP++;
					bfs(nW, nH);
				}
			}
		}
		vtResult.push_back(STEP);

	}

	for (int i = 0; i < vtResult.size(); i++)
	{
		cout << vtResult[i] << endl;
	}


	return 0;
}

```

## \[백준\]\[2667\] 단지번호붙이

### 문제

&lt;그림 1&gt;과 같이 정사각형 모양의 지도가 있다. 1은 집이 있는 곳을, 0은 집이 없는 곳을 나타낸다. 철수는 이 지도를 가지고 연결된 집들의 모임인 단지를 정의하고, 단지에 번호를 붙이려 한다. 여기서 연결되었다는 것은 어떤 집이 좌우, 혹은 아래위로 다른 집이 있는 경우를 말한다. 대각선상에 집이 있는 경우는 연결된 것이 아니다. &lt;그림 2&gt;는 &lt;그림 1&gt;을 단지별로 번호를 붙인 것이다. 지도를 입력하여 단지수를 출력하고, 각 단지에 속하는 집의 수를 오름차순으로 정렬하여 출력하는 프로그램을 작성하시오.



![](https://www.acmicpc.net/upload/images/ITVH9w1Gf6eCRdThfkegBUSOKd.png)

### 입력

첫 번째 줄에는 지도의 크기 N\(정사각형이므로 가로와 세로의 크기는 같으며 5≤N≤25\)이 입력되고, 그 다음 N줄에는 각각 N개의 자료\(0혹은 1\)가 입력된다.

### 출력

첫 번째 줄에는 총 단지수를 출력하시오. 그리고 각 단지내 집의 수를 오름차순으로 정렬하여 한 줄에 하나씩 출력하시오.



```text
input
7
0110100
0110101
1110101
0000111
0100000
0111110
0111000

out
3
7
8
9
```

```cpp

#include <iostream>
#include <string>

#define N_MAX 26
using namespace std;

int map[N_MAX][N_MAX] = {0,};
int visit[N_MAX][N_MAX] = { 0, };
int dir[4][2] = { {1,0}, {0,1}, {-1,0}, {0,-1}, };
int N , STEP = 0 ;

void dfs(int x, int y)
{
	visit[x][y] = STEP;

	for (int i = 0; i < 4; i++)
	{
		int x_add = dir[i][0] + x;
		int y_add = dir[i][1] + y;

		if (x_add == 0 || y_add == 0)
		{
			continue;
		}
	

		if (visit[x_add][y_add] == 0 && map[x_add][y_add] == 1)
		{
			dfs(x_add, y_add);
		}
	}
}

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		string num;
		cin >> num;
		
		for (int j = 0; j < num.length(); j++)
		{
			map[i][j + 1] = int(num.at(j) - 48);
		}

	}
	
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{

			if (map[i][j] == 1 && visit[i][j] == 0)
			{
				STEP++;
				dfs(i, j);
			}
			
		}
	}

	cout << STEP << endl;
	for (int i = 1; i <= STEP; i++)
	{
		int count = 0;
		for (int x = 1; x <= N; x++)
		{
			for (int y = 1; y <= N; y++)
			{
				if (i == visit[x][y])
				{
					count++;
				}
			}
		}

		cout << count << endl;
	}
	
	return 0;

```

## \[백준\]\[2606\] 바이러

### 문제

신종 바이러스인 웜 바이러스는 네트워크를 통해 전파된다. 한 컴퓨터가 웜 바이러스에 걸리면 그 컴퓨터와 네트워크 상에서 연결되어 있는 모든 컴퓨터는 웜 바이러스에 걸리게 된다.

예를 들어 7대의 컴퓨터가 &lt;그림 1&gt;과 같이 네트워크 상에서 연결되어 있다고 하자. 1번 컴퓨터가 웜 바이러스에 걸리면 웜 바이러스는 2번과 5번 컴퓨터를 거쳐 3번과 6번 컴퓨터까지 전파되어 2, 3, 5, 6 네 대의 컴퓨터는 웜 바이러스에 걸리게 된다. 하지만 4번과 7번 컴퓨터는 1번 컴퓨터와 네트워크상에서 연결되어 있지 않기 때문에 영향을 받지 않는다.

![](https://www.acmicpc.net/upload/images/zmMEZZ8ioN6rhCdHmcIT4a7.png)

어느 날 1번 컴퓨터가 웜 바이러스에 걸렸다. 컴퓨터의 수와 네트워크 상에서 서로 연결되어 있는 정보가 주어질 때, 1번 컴퓨터를 통해 웜 바이러스에 걸리게 되는 컴퓨터의 수를 출력하는 프로그램을 작성하시오.

### 입력

첫째 줄에는 컴퓨터의 수가 주어진다. 컴퓨터의 수는 100 이하이고 각 컴퓨터에는 1번 부터 차례대로 번호가 매겨진다. 둘째 줄에는 네트워크 상에서 직접 연결되어 있는 컴퓨터 쌍의 수가 주어진다. 이어서 그 수만큼 한 줄에 한 쌍씩 네트워크 상에서 직접 연결되어 있는 컴퓨터의 번호 쌍이 주어진다.

### 출력

1번 컴퓨터가 웜 바이러스에 걸렸을 때, 1번 컴퓨터를 통해 웜 바이러스에 걸리게 되는 컴퓨터의 수를 첫째 줄에 출력한다.

### 코드 

```text
input
7
6
1 2
2 3
1 5
5 2
5 6
4 7

output
4
```

```cpp
#include <iostream>

using namespace std;

#define N_MAX 101

enum E_STATUS
{
	eNone,
	eReady,
	eVisit,
	eMax
};


int map[N_MAX][N_MAX] = { 0, };
int visit[N_MAX] = { 0, };

int N;

void dfs(int V)
{
	visit[V] = eVisit;
	
	for (int i = 1; i <= N; i++)
	{
		if (map[V][i] == 1 && visit[i] == eNone)
		{
			dfs(i);
		}
	}

}

int main()
{
	
	int Link;
	cin >> N >> Link;

	// INSERT 
	for (int i = 1; i <= Link; i++)
	{
		int x, y;
		cin >> x >> y;

		map[x][y] = 1;
	}

	dfs(1);

	int count = 0;
	for (int i = 1; i <= N; i++)
	{
		if (visit[i] == eVisit)
		{
			count++;
		}
	}

	// 자기 자신은 제외
	cout << count-1 ;

	return 0;
}
```

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


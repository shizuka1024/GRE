import numpy as np

# inf值不能太小，不然會出現邊相加超過之問題
inf = 1000
key_point = 0
n = 6
e = np.random.randint(1,30,(n ,n))

# 初始化
for i in range(n):
    e[i][i] = 0

# 矩陣
resultantList = []
for i in range(0, n):
    for j in range(0, n):
        if i != j : 
            if e[i][j] not in resultantList:
                resultantList.append(e[i][j])
            else:
                e[i][j] = inf
# 矩陣
for i in range(0, n):
    for j in range(0, n):
        if i != j : 
            if e[i][j] != inf and e[j][i] != inf:
                e[j][i] = inf
                print(j,i)

dis = np.zeros(n, dtype=int)
for i in range(0, n):
    dis[i] = e[key_point][i]

book = np.zeros(n, dtype=int)
book[key_point] = 1

# Dijkstra Algorithm
for i in range(0, n):
    min = inf
    for j in range(0, n):
        if book[j] == 0 and dis[j] < min :
            min = dis[j]
            u = j
    book[u] = 0
    for v in range(0, n):
        if e[u][v] < inf:
            if dis[v] > dis[u] + e[u][v]:
                dis[v] = dis[u] + e[u][v]
                
print("\n",dis)

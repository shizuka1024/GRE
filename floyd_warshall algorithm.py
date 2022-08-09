import numpy as np

n = 4
INF = 999
# distance好像可以用稀疏矩陣
# Algorithm implementation
def floyd_warshall(G):
    distance = list(map(lambda i: list(map(lambda j: j, i)), G))

    # Adding vertices individually
    for k in range(n):
        for i in range(n):
            for j in range(n):
                # Method 1
                if(distance[i][j] > distance[i][k]+distance[k][j]):
                    distance[i][j] = distance[i][k]+distance[k][j]
                # Method 2
                # distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j])
    print_solution(distance)


# Printing the solution
def print_solution(distance):
    for i in range(n):
        for j in range(n):
            if(distance[i][j] == INF):
                print("INF", end=" ")
            else:
                print(distance[i][j], end="  ")
        print(" ")

G = [[0, 3, INF, 5],
         [2, 0, INF, 4],
         [INF, 1, 0, INF],
         [INF, INF, 2, 0]]
floyd_warshall(G)
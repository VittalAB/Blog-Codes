from collections import defaultdict
class Graph:
    def __init__(self):
        self.count = 0
        self.graph = defaultdict(list)

    def addEdge(self, u, v):
        self.graph[u].append(v)

    def DFSUtil(self, v, visited):
        visited.add(v)
        self.count = self.count + 1 
        for neighbour in self.graph[v]:
            if neighbour not in visited:
                self.DFSUtil(neighbour, visited)

    def DFS(self, v):
        visited = set()
        self.count = 0
        self.DFSUtil(v, visited)
        return self.count

g = Graph()

g.addEdge(0, 1)
g.addEdge(1, 2)
g.addEdge(2, 4)
g.addEdge(3, 4)
g.addEdge(3, 1)
g.addEdge(4, 3)
g.addEdge(4, 1)
print("Following is DFS from (starting from vertex 2)")
ans =  []
for i in range(5):
    count = g.DFS(i)
    ans.append(count)
print(max(ans))
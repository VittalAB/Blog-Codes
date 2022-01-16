from collections import defaultdict
import queue

class Graph:
    def __init__(self):
        self.graph = defaultdict(list)
    
    def addedge(self,u ,v):
        self.graph[u].append(v)
        self.graph[v].append(u)
    
    def BFS(self,s):

        queue = []
        visited = [False]*(max(self.graph)+1)
        queue.append(s)
        visited[s] = True

        while queue:
            s = queue.pop(0)
            print(s,end=' ')

            for neighbour in self.graph[s]:
                if not visited[neighbour]:
                    queue.append(neighbour)
                    visited[neighbour] = True
g = Graph()

g.addedge(0,1)
g.addedge(0,2)
g.addedge(1,2)
g.addedge(2,0)
g.addedge(2,3)
g.addedge(3,3)

g.BFS(2)


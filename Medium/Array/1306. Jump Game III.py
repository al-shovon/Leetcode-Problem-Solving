# 1306. Jump Game III ->python

from collections import deque
class Solution:
    def canReach(self, arr: List[int], start: int) -> bool:
        n= len(arr)
        visited = [False] * n
        q = deque()
        q.append(start)

        while q:

            index = q.popleft()
            val = arr[index]
            visited[index] = True
            if(val == 0): return True

            sum = index+val
            sub = index - val

            if(sum < n and visited[sum] == False):
                if(arr[sum] == 0): return True
                q.append(sum)
            
            if(sub >= 0 and visited[sub] == False):
                if(arr[sub] == 0): return True
                q.append(sub)

        return False

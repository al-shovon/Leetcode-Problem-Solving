# 1331. Rank Transform of an Array
class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        new_arr = list(arr)
        new_arr.sort()
        start = 1
        rank = {}
        n = len(arr)

        for i in range(0,n,1):
            if(i == 0 or new_arr[i] == new_arr[i-1]):
                rank[new_arr[i]] = start
                continue
            start+=1
            rank[new_arr[i]] = start
        
        for i in range(0,n,1):
            arr[i] = rank[arr[i]]

        return arr

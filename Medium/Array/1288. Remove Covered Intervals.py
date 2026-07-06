# 1288. Remove Covered Intervals
# nlog(n)
class Solution:
    def removeCoveredIntervals(self, intervals: List[List[int]]) -> int:

        intervals.sort()
        n = len(intervals)
        start = intervals[0][0]
        end = intervals[0][1]
        count = 0

        for i in range(1,n,1):
            x = intervals[i][0]
            y = intervals[i][1]
            if(x >= start and y <= end):
                count+=1
                continue
            elif(x == start and y > end):
                count+=1
            
            start = x
            end = y
        return n - count

        

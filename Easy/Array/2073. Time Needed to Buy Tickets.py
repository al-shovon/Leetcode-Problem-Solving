# 2073. Time Needed to Buy Tickets
# app->1 O(n)
class Solution:
    def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:

        n = len(tickets)
        count = 0

        for i in range(n):
                
            if(i <= k): count+= min(tickets[i], tickets[k])
            else : count+= min(tickets[i], tickets[k]-1)
        return count


# app2: O(n^2):
class Solution:
    def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:

        n = len(tickets)
        count = 0

        while(tickets[k] != 0):
            for i in range(0,n,1):
                if tickets[k] == 0: return count
                if tickets[i] > 0:
                    tickets[i]-=1
                    count+=1
        return count

# 1344. Angle Between Hands of a Clock
class Solution:
    def angleClock(self, hour: int, minutes: int) -> float:

        h = (hour%12)*30 + (minutes*0.5)
        m = minutes*6
        ans = abs(h-m)
        return min(ans,360-ans)


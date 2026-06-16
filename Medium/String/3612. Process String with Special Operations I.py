# 3612. Process String with Special Operations I

class Solution:
    def processStr(self, s: str) -> str:
        result = ""

        for i in s:
            if(i == '*'):
                if(result): result = result[:-1]
            elif(i == '#'): result = result *2
            elif(i == '%'): result= result[::-1]
            else : result+=i
        return result

# 1700. Number of Students Unable to Eat Lunch ->python
# app ->1
class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:

        n = len(students)
        one = students.count(1)
        zero = n - one

        for i in sandwiches:
            if(i == 1): one-=1
            else: zero-=1

            if(one < 0 or zero < 0): return one+zero+1




        return one+zero      

# app ->2
# check in c++

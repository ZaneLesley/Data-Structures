from typing import List
import time
'''
Finding the min number.

if you take the array and cut it in two, what are you left with?

3, 4, 5 | 6, 1, 2 : min is on right side
6, 1 , 2

4, 5 | 6 , 7 : min is on left side

4, 5 , 0 | 1, 2, 3 : min is on left side

4, 5, | 6, 7 : 
'''


class Solution:
    def find_min(self, nums: List[int]) -> int:
        res = nums[0]
        l = 0
        r = len(nums) - 1

        while l <= r:
            mid = (l + (r - l)) // 2
            res = min(res, nums[mid])
            if nums[l] < nums[r]:
                min(res, nums[l])
            if nums[mid] >= nums [l]:
                l = mid + 1
            else: r = mid - 1

        return res

if '__main__' == __name__:
    s = Solution()
    print(s.find_min(nums=[3,4,5,6,1,2]))

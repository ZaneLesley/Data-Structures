from typing import List


class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums) - 1
        while left <= right:
            mid = int((left + right) / 2)
            if nums[mid] == target:
                return mid
            if nums[mid] > target:
                right = mid - 1
            else:
                left = mid + 1
        return -1


if '__main__' == __name__:
    solution = Solution()
    print(solution.search([-1, 0, 2, 4, 6, 8], 4))

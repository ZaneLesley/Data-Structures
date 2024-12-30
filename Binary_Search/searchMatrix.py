from typing import List

class Solution:
    def search_matrix(self, matrix: List[List[int]], target: int) -> bool:
        search_row = []
        for row in matrix:
            if (row[0] <= target) and (row[len(row) - 1] >= target):
                search_row = row
                break

        print(search_row)

        # Regular BFS on specific row
        left = 0
        right = len(search_row) - 1
        while left <= right:
            mid = left + ((right - left) // 2)
            if search_row[mid] == target:
                return True
            if search_row[mid] > target:
                right = mid - 1
            else:
                left = mid + 1

        return False

if '__main__' == __name__:
    s = Solution()
    print(s.search_matrix(matrix=[[1,2,4,8],[10,11,12,13],[14,20,30,40]], target=10))

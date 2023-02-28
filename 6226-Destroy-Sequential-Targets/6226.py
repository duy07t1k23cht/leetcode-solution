from typing import List


class Solution:
    def destroyTargets(self, nums: List[int], space: int) -> int:
        nums = sorted(nums, key=lambda x: (x % space, x))
        mods = [n % space for n in nums]

        max_target = 1
        targets = [mods[0]]
        results = [nums[0]]
        for i in range(len(mods)):
            if i == 0 or mods[i] != mods[i - 1]:
                curr_target = 1
                temp_result = nums[i]
            else:
                curr_target += 1
                if curr_target > max_target:
                    max_target = curr_target
                    targets = []
                    results = []
            if curr_target == max_target:
                targets.append(mods[i])
                results.append(temp_result)

        return min(results)


solution = Solution()
print(solution.destroyTargets([6, 2, 5], 100))
print(solution.destroyTargets([3, 7, 8, 1, 1, 5], 2))
print(solution.destroyTargets([1, 3, 5, 2, 4, 6], 2))
print(solution.destroyTargets([13, 3, 5, 2, 4, 6] * 100, 2))

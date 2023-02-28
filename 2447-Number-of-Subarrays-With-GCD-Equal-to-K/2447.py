import math
from typing import List


class Solution:
    def subarrayGCD(self, nums: List[int], k: int) -> int:
        result = 0
        first_index = 0
        last_index = 0
        buffer_last = True

        while True:
            # Update index
            if buffer_last:
                last_index += 1
            else:
                first_index += 1

            # Get the gcd
            gcd = math.gcd(nums[first_index:last_index])

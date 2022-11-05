from typing import List
from unittest import result


class Solution:
    def productQueries(self, n: int, queries: List[List[int]]) -> List[int]:
        MOD = 10**9 + 7
        powers = bin(n)[2:][::-1]
        powers = [i for i in range(len(powers)) if powers[i] == "1"]
        for li, ri in queries:
            result = 1
            for k in powers[li : ri + 1]:
                result = (result * ((2**k) % MOD)) % MOD
            yield result


solution = Solution()
# print(list(solution.productQueries(15, [[0, 1], [2, 2], [0, 3]])))
print(list(solution.productQueries(2**30 - 1, [[0, 30]] * 100000)))

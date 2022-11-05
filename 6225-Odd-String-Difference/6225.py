from typing import List


class Solution:
    def oddString(self, words: List[str]) -> str:
        n = len(words[0])
        for i in range(1, n):
            ds = []
            same_value = -1
            for word in words:
                d = ord(word[i]) - ord(word[i - 1])
                if d in ds:
                    same_value = d
                ds.append(d)
            for j, d in enumerate(ds):
                if d != same_value:
                    return words[j]


solution = Solution()
print(solution.oddString(["adc", "wzy", "abc"]))

from typing import List
from unittest import result


class Solution:
    def twoEditWords(self, queries: List[str], dictionary: List[str]) -> List[str]:
        result = []
        for query in queries:
            for word in dictionary:
                # Need to check if the query can change into word in 2 edits
                # count_edit = sum([query[i] != word[i] for i in range(len(query))])
                if sum([query[i] != word[i] for i in range(len(query))]) <= 2:
                    result.append(query)
                    break
        return result


solution = Solution()
print(solution.twoEditWords(["word", "note", "ants", "wood"], ["wood", "joke", "moat"]))
print(solution.twoEditWords(["yes"], ["not"]))

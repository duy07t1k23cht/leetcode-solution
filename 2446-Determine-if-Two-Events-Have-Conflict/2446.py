from typing import List


class Solution:
    def haveConflict(self, event1: List[str], event2: List[str]) -> bool:
        begin_1, end_1 = event1
        begin_2, end_2 = event2

        bh1, bm1 = [int(i) for i in begin_1.split(":")]
        eh1, em1 = [int(i) for i in end_1.split(":")]

        bh2, bm2 = [int(i) for i in begin_2.split(":")]
        eh2, em2 = [int(i) for i in end_2.split(":")]

        bm1 = bh1 * 60 + bm1
        em1 = eh1 * 60 + em1
        bm2 = bh2 * 60 + bm2
        em2 = eh2 * 60 + em2

        return (bm1 <= em2 and bm1 >= bm2) or (bm2 <= em1 and bm2 >= bm1)

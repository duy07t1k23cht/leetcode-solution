import math


class Solution:
    def countTime(self, time: str) -> int:
        h, m = time.split(":")

        if h[0] == "?" and h[1] == "?":
            result_h = 24
        elif h[0] == "?":
            if h[1] == "0" or h[1] == "1" or h[1] == "2" or h[1] == "3":
                result_h = 3
            else:
                result_h = 2
        elif h[1] == "?":
            if h[0] == "0" or h[0] == "1":
                result_h = 10
            else:
                result_h = 4
        else:
            result_h = 1

        if m[0] == "?" and m[1] == "?":
            result_m = 60
        elif m[0] == "?":
            result_m = 6
        elif m[1] == "?":
            result_m = 10
        else:
            result_m = 1

        return result_h * result_m

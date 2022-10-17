from typing import List


def longestCommonPrefix(strs: List[str]) -> str:
    for idx in range(len(strs[0]) + 1):
        sub_string = strs[0][:idx]
        for s in strs:
            if not s.startswith(sub_string):
                return sub_string[:-1]

    return sub_string


if __name__ == "__main__":
    strs = ["flower", "flow", "flight"]
    print(longestCommonPrefix(["a"]))

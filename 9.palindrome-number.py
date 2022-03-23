#
# @lc app=leetcode id=9 lang=python3
#
# [9] Palindrome Number
#

# @lc code=start
class Solution:
    def isPalindrome(self, x: int) -> bool:
        x = str(x)
        print("x", x)
        size = len(x)
        print("size", size)
        isNegative = x[0] == "-"
        print("isNegative", isNegative)
        if isNegative:
            return False
        for i in range(size//2):
            print(i)
            former = x[i]
            letter = x[size -1 - i]
            if former != letter:
                return False
        return True
# @lc code=end


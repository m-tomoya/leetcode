/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer(2);
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                if (diff == nums[j]) {
                    answer.at(0) = i;
                    answer.at(1) = j;
                }
            }
        }
        return answer;
    }
};
// @lc code=end

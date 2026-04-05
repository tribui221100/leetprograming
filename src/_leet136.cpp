#include "main.hpp"

/// Requirement::
/// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
/// You must implement a solution with a linear runtime complexity and use only constant extra space.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int l_result = 0;
        for(int num : nums)
        {
            l_result ^= num;
        }
        
        return l_result;
    }
};

void _leet136(int exe) {
    if(exe == RUN)
    {
        Solution l_solution;
        vector<int> l_nums_1 = {2,2,1};
        vector<int> l_nums_2 = {4,1,2,1,2};
        vector<int> l_nums_3 = {1};

        int l_result1 = l_solution.singleNumber(l_nums_1);
        int l_result2 = l_solution.singleNumber(l_nums_2);
        int l_result3 = l_solution.singleNumber(l_nums_3);
        cout << "LeetCode 136 Result 1: " << l_result1 << endl;
        cout << "LeetCode 136 Result 2: " << l_result2 << endl;
        cout << "LeetCode 136 Result 3: " << l_result3 << endl;
    }
}

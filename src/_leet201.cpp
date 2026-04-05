#include "main.hpp"


class Solution {
    public:
        int rangeBitwiseAnd(int left, int right) {
            int l_result{left};
            int l_len = right - left;
            for(int i = 0; i < l_len; i++)
            {
                l_result &= left+i;
            }
            return l_result;
        }
    };

void _leet201(int exe) {
    if(exe == RUN)
    {
        Solution l_solution;

        int l_result1 = l_solution.rangeBitwiseAnd(5,7);
        int l_result2 = l_solution.rangeBitwiseAnd(0,0);
        int l_result3 = l_solution.rangeBitwiseAnd(1,2147483647);
        cout << "LeetCode 201 Result 1: " << l_result1 << endl;
        cout << "LeetCode 201 Result 2: " << l_result2 << endl;
        cout << "LeetCode 201 Result 2: " << l_result3 << endl;
    }   
}

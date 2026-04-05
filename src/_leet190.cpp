#include "main.hpp"


class Solution {
    public:
        int reverseBits(int n) {
            int l_result;
            l_result = (n >> 16) | (n << 16);
            l_result = ((l_result&0xFF00FF00)>>8) | ((l_result&0x00FF00FF)<<8);
            l_result = ((l_result&0xF0F0F0F0)>>4) | ((l_result&0x0F0F0F0F)<<4);
            l_result = ((l_result&0xCCCCCCCC)>>2) | ((l_result&0x33333333)<<2);
            l_result = ((l_result&0xAAAAAAAA)>>1) | ((l_result&0x55555555)<<1);
            return l_result;
        }
    };

void _leet190(int exe) {
    if(exe == RUN)
    {
        Solution l_solution;
        int l_nums_1 = 43261596;
        int l_nums_2 = 2147483644;

        int l_result1 = l_solution.reverseBits(l_nums_1);
        int l_result2 = l_solution.reverseBits(l_nums_2);
        cout << "LeetCode 190 Result 1: " << l_result1 << endl;
        cout << "LeetCode 190 Result 2: " << l_result2 << endl;
    }   
}

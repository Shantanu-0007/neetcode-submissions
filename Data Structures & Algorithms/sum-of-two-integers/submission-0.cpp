class Solution {
public:
    int getSum(int a, int b) { //1,1
        while (b != 0) {//
            int carry = (a & b) << 1; //1&1 << 1 = 10, 00
            a ^= b; //01 ^ 01 = 00, 01 ^ 00 = 01,
            b = carry; //10, 00
        }
        return a; //2
    }
};
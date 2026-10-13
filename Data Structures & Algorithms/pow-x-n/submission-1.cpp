class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;
        if (x == 0) return 0.0;
        if (x == 1) return 1.0;
        if (x == -1 && n % 2 == 0) return 1.0;
        if (x == -1 && n % 2 != 0) return -1.0;
        long binform = n;
        if(n < 0){
            binform = -binform;
            x = 1/x;
        }
        double ans = 1;
        while(binform > 0 ){
            if(binform % 2 == 1){
                ans = ans * x;
            }   
            x = x * x;
            binform = binform / 2;
        }
        return ans;
    }
};
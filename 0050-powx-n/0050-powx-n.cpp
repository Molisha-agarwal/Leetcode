class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long nn = n;  // Convert n to long long to handle edge cases like INT_MIN
        
        if (nn < 0) {
            nn = -nn;  // Make it positive
            x = 1 / x; // Take reciprocal for negative power
        }

        while (nn) {
            if (nn % 2 == 1) { // If the power is odd
                ans *= x;
                nn=nn-1;
            }
            else{
            x *= x; // Square the base
            nn /= 2; // Divide the exponent by 2
        }
        }
        
        return ans;
    }
};

class Solution {
public:
    double Power(double base, int exponent) {
        bool flag = false;
        if(equal(base, 0.0) && exponent < 0)
        {
            return 0.0;
        }
        if(exponent < 0)
        {
            exponent = -exponent;
            flag = true;
        }
        double result = 1.0;
        for(int i = 1; i <= exponent; i++)
        {
            result *= base;
        }
        if(flag)
            return 1.0 / result;
        else
            return result;
    }
    bool equal(double a, double b)
    {
        if(abs(a - b) < 0.0000001)
            return true;
        else
            return false;
    }
};

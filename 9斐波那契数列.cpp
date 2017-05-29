class Solution {
public:
    int Fibonacci(int n) {
        int num[39];
        num[0] = num[1] = 1;
        for(int i = 2; i <n ; i ++)
        {
            num[i] = num[i - 1] + num[i - 2];
        }
        return num[n - 1];
    }
};

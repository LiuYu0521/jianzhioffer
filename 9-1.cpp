class Solution {
public:
    int jumpFloor(int number) {
        int a = 1;
        int b = 2;
        if(number == 1)
            return a;
        if(number == 2)
            return b;
        int sum = 0;
        for(int i = 3; i <= number; i++)
        {
            sum = a + b;
            a = b;
            b = sum;
        }
        return sum;
    }
};

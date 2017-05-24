class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int columns = array.size();
        int rows = array[0].size();
        bool flag = false;
        if(rows > 0 && columns > 0)
        {
            int row = 0;
            int column = columns - 1;
            while(row < rows && column >= 0)
            {
                if(array[row][column] == target)
                {
                    flag = true;
                    break;
                }
                else if(array[row][column] < target)
                {
                    row++;
                }
                else
                {
                    column--;
                }
            }
        }
        return flag;
    }
};

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        return find(rotateArray, 0, rotateArray.size() - 1);
    }

    int find(vector<int> a, int begin, int end) {
        if (begin + 1 == end)
            return a[begin] <= a[end] ? a[begin] : a[end];

        int mid = int((begin + end) / 2);
        if (a[begin] == a[mid] && a[mid] == a[end]) {  // 处理特殊情况，
            int x = find(a, begin, mid);
            int y = find(a, mid, end);
            return x < y ? x : y;
        }
        if (a[begin] <= a[mid]) {  // right
            begin=mid;
            return find(a, begin, end);
        }
        else {   // left
            end = mid;
            return find(a, begin, end);
        }
    }
};

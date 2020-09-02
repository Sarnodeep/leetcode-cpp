class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int length = arr.size();
        int right = arr[length - 1];
        arr[length - 1] = -1;
        int last;
        for(int i = length -2; i > -1; i--) {
            last = arr[i];
            arr[i] = right;
            right = last < arr[i] ? arr[i] : last;
        }
        return arr;
    }
};
class Solution {
private:
    bool fun(vector<int>& nums, int x) {
        int n = nums.size();
        vector<int> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back(nums[(i + x) % n]);
        }

        return is_sorted(arr.begin(), arr.end());
    }

public:
    bool check(vector<int>& nums) {
        int n = nums.size();

        for (int x = 0; x < n; x++) {
            if (fun(nums, x)) {
                return true;
            }
        }

        return false;
    }
};
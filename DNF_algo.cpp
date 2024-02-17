class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0; // Pointer for 0s
        int high = nums.size() - 1; // Pointer for 2s
        
        for (int i = 0; i <= high;) {
            if (nums[i] == 0) {
                swap(nums[i], nums[low]);
                i++; // Move to the next element after swapping
                low++; // Move the low pointer to the right
            } else if (nums[i] == 2) {
                swap(nums[i], nums[high]);
                high--; // Move the high pointer to the left
            } else {
                i++; // Move to the next element
            }
        }
    }
};

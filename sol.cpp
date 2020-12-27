class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
		//if an element matches the 'val', remove it from the vector
		//then, decrement 'i' to go back to the position that was deleted
        for(int i=0; i<(int)nums.size(); ++i)
            if(nums[i]==val) {
                nums.erase(nums.begin()+i);
                --i;
            }
        return (int)nums.size();
    }
};

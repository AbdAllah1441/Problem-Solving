class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        vector<int> m;
        
        if (nums.size() == 1)
            return 1;

        if (nums[nums.size() - 1] == nums[0])
        {
            m.push_back(nums[0]);
            nums = m;
            return 1;
        }

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] != nums[i + 1])
            {
                m.push_back(nums[i]);
            }
        }

        m.push_back(nums[nums.size() - 1]);
  
        nums = m;
        return m.size();
    }
};

    //Two sum = target leetcode problem 
     // Input: nums = [2,7,11,15], target = 9
     // Output: [0,1]
     // Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
    
    
    //approach 1 = brute force - time complexity  O(N^2)      nested loop i and j to check for nums[i] + nums[j] == target



    int* twoSum(int* nums, int numsSize, int target, int* returnSize ){
    int *c = (int*)calloc(2, sizeof(int)), i, j;
    for (i = 0; i < numsSize; ++i) {
        for (j = i+1; j < numsSize; ++j) {
            if (nums[i] + nums[j] == target) {             
                *returnSize=2;
                c[0] = i;
                c[1] = j;
                return c;
            }
        }
    }
return NULL;
}

    //approach 2 = hash map , unordered map technique , time complexity  O(N) - best possible solution
    vector<int> ans{-1,-1};
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++)
    {
        int needed_element = target-nums[i];
        if(mp.find(needed_element) != mp.end())//found
        {
            ans[0] = mp[needed_element];
            ans[1] = i;
            return ans;
        }
        else{
            mp[nums[i]] = i;
        }
    }
    return ans;
}
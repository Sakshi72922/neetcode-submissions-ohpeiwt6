class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int offset = 50000;
        vector<int> count(100001,0);
        for(int num : nums){
            count[num + offset]++;

        }
        int idx = 0;
        for(int i = 0;i<100001;i++){
            while(count[i]>0){
                nums[idx ++ ] = i-offset;
                count[i]--;
            }
        }
        return nums;
    }
};
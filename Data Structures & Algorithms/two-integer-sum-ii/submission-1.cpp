class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int r=numbers.size()-1;
        while(l<r) {
            int cm =numbers[l]+numbers[r];
            if(cm>target){
                r--;
            }
            else if(cm<target){
                l++;
            }
            else{
                return {l+1,r+1};
            }
        }
        return {};
    }
};

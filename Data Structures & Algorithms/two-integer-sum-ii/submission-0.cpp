class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //vector <vector<int>> res;
        int n=numbers.size();
        //sort(nums.begin(),nums.end());
        for(int i=0;i<n ;i++){

            for(int j=i+1;j<n;j++){
                if(numbers[i]+numbers[j]==target){
                    return{i+1,j+1};

                }

            }
        }
        return {};
    }
};

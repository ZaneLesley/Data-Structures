#include <vector>

using namespace std;

// O(n^2) time, need to go back and make O(n)
vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> answer(nums.size(), 1);
    for(int i = 0; i < nums.size(); i++){
        for(int j = 0; j < nums.size(); j++){
            if(i != j){
                answer[j] *= nums[i]; 
            }
        }
    }
}
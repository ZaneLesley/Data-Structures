#include <vector>
#include <unordered_map>

using namespace std;

/*
Inital thoughts: 
Take the number we have, say we have 5, subtract the target from it, and search for it. 
So 5 for target 3, we look for 2, if it doesnt exist, we go on and look for the next number.


Remarks: 
neetcode solution implemented to learn umap better, main is not done on this one as it isn't fully my work. Will
Now go back and reimplement with containsDuplicate.cpp and isAnagram.cpp using knowledge gained from here

*/

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> umap;
    for(int i = 0; i < nums.size(); i++){
        int complement = nums[i] - target;

        if(umap.find(complement) != umap.end()){
            return {umap[complement], i};
        }

        umap.insert(nums[i], i);
    }
    return {};

};

int main() {

};
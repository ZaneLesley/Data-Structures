#include <vector>
#include <cstdio>

using namespace std;

/* 

Basically a quick recap back into c++ and vectors

Code is pretty simple, iterate through all of the numbers checking for duplicate on the vector.
Can start j at i + 1 becasue we have already checked the number previous to j, so no need to check again.

 */

bool hasDuplicate(vector<int>& nums){
    for (int i = 0; i < nums.size(); i++){
        for (int j = i + 1; j < nums.size(); j++){
            if(nums[i] == nums[j])
                return true;
        }
    }

    return false;

};

int main(){
    vector<int> nums = {1,2,3,4,5,1};

    if(hasDuplicate(nums)){
        printf("the vector has a duplicate");
    }

    else{
        printf("The vector doesn't have a duplicate");
    }
};
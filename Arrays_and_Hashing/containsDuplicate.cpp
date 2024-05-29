#include <vector>
#include <cstdio>
#include <unordered_map>

using namespace std;

/* 
Went back and reimplemented with umap. 
We keep the key and value of the hash, incrementing it by 1 for each count, and if there is any count over 1 we know there is a duplicate.
 */

bool hasDuplicate(vector<int>& nums){
    unordered_map<int, int> umap;
    for(int i = 0; i < nums.size(); i++){
        umap[nums[i]]++;                        //Initializes to 0 if not made, and moves to 1.
        if(umap[nums[i]] > 1){                  //That is why here we check bigger than 1 instead of bigger than 0.
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
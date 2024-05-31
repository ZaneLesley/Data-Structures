#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

/*
This one took far too long im gonna be honest :dead:

Explanation of what is happening here:

We have a vector of vectors with our answers,
We also have a set keeping track of the vectors we currently have.

We use a two pointer system with l and r to iterate over the vector, we keep m as our pivot point, moving it through
the vector, ensuring it is never the same index as m or l.

As we find triplets that equal 0, we sort them and add them to the set of vectors to ensure we can never have the same vector twice.

We then iterate through our completed set of vectors and push them onto a final vector of vectors to return.

Confusing. A bit... Logic is really tight coding, so keep close eyes on what is actually happening there. 

I believe the optimal solution only uses a vector tho... But I like mine, it's cool and uses two cool data structures together to come up with a solution.
*/
vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> answer;
    set<vector<int>> setVectors;

    for(int m = 0; m < nums.size(); m++){
        int l = 0;
        int r = nums.size() - 1;
        while(l < r){
            if(m == l){
                l++;
            }
            else if(m == r){
                r--;
            }
            else{
                if(nums[l] + nums[m] + nums[r] == 0){
                    vector<int> vec = {nums[l], nums[m], nums[r]};
                    sort(vec.begin(), vec.end());
                    setVectors.insert(vec);
                    l++;
                }

                else if(nums[l] + nums[m] + nums[r] > 0){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
    }
    for(auto vec : setVectors){
        answer.push_back(vec);
    } return answer;
}
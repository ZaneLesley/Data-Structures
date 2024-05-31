#include <vector>
#include <unordered_set>

using namespace std;

/*
No Initial Thoughts let just try coding something.... We know we don't care for duplicates, so just use a set.

// Not my solve, come back and redo later, good teaching problem.
*/
int longestConsecutive(vector<int>& nums) {
    unordered_set<int> uset (nums.begin(), nums.end());
    int longest = 0;
    for(auto num : uset){
        if(uset.find(num - 1) == uset.end()){
            int length = 1;
            while(uset.find(num + length) != uset.end()){
                length++;
            }
            longest = max(length, longest);
        }
    }
    return longest;
}
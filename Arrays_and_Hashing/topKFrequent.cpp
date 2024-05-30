#include <vector>
#include <unordered_map>

using namespace std;

/*
Initial Thoughts:
Make a counting umap, keeping track of number and frequenecy, then go back through the umap creating a list of size k, iterate through the umap and for each
number update the frequency list for key in the umap.

Problem with Initial Thoughts: Keeping track of which numbers to remove and keep is too expensive, not efficient. Has to be a better way.

Use a vector to keep track of each frequency, then just pull from the backend of the vector, that way we don't have to keep track of an order, just the most frequent.
*/

vector<int> topKFrequent(vector<int> &nums, int k){
    unordered_map<int, int> count;
    vector<vector<int>> freq(nums.size() + 1);
    
    for(int num : nums)
    {
        count[num]++;
    }

    // Keys = number
    // Values = the frequency of the number
    for(auto n : count){
        freq[n.second].push_back(n.first);
    }

    // Pull from backend of frequency vector until its the same size as k.
    vector<int> answer;

    for(int i = freq.size() - 1; i > 0; i--){
        for(int num : freq[i]){
            answer.push_back(num);
            if (answer.size() == k){
                return answer;
            }
        }
    }

};
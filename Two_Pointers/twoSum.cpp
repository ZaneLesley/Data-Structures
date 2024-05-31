#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int f = 0;
    int b = numbers.size() - 1;

    for(int i = 0; i < numbers.size(); i++){
        if(numbers[f] + numbers[b] == target){
            return {f + 1, b + 1};
        }
        if(numbers[f] + numbers[b] > target){
            b--;
        }
        else{
            f++;
        }
    }
}
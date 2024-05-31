#include <vector>
#include <iostream>

using namespace std;

int maxArea(vector<int>& heights) {
    int largestArea = 0;
    int l = 0;
    int r = heights.size() - 1;
    int area = 0;
    while(l < r){
        
        // Smallest height is how far the container can come up to.
        // Move the shortest container in.
        if(heights[l] <= heights[r]){
            area = (r - l) * heights[l];
            l++;
        }
        else{
            area = (r - l) * heights[r];
            r--;
        }
        if(area > largestArea){
            largestArea = area;
        }
    }
    return largestArea;
}

int main(){
    vector<int> heights = {2,2,2};
    int result = maxArea(heights);
    cout << result << endl;
}
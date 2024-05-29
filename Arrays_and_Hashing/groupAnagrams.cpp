#include <string>
#include <unordered_map>

using namespace std;

/*
Get count for each ASCII character and assign them to the map, then just get each pair value of completed vector<string> and return them.
*/

vector<vector<string>> groupAnagrams(vector<string>& strs){
    unordered_map<int, vector<string>> umap;
    for(string s : strs){
        int count = 0;
        for(char c : s){
            count+= int(c);
        }

        umap[count].push_back(s);
    }

    vector<vector<string>> answer;
    for (auto s : umap){
        answer.push_back(s.second);
    }

    return answer;

};

int main(){
    //Not Implemented for this one. (Probably won't be implemented going forward for a good majority.)
};
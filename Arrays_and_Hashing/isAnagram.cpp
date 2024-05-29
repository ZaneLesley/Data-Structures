#include <string>
#include <cstdio>
#include <unordered_map>

using namespace std;

/*
Counts each of the letters and assigns them into a map, then subtracts from those letters, if any count ends up negative we know its not in the anagram.
*/

bool isAnagram(string s, string t){
    // If not same size, not an anagram.
    if(s.size() != t.size()){
        return false;
    }
    unordered_map<char, int> umap;
    for(int i = 0; i < s.size(); i++){
        umap[s[i]]++;
    }

    for (int i = 0; i < t.size(); i++){
        umap[t[i]]--;
        if(umap[t[i]] < 0){
            return false;
        }
    }

    return true;

};

int main(){
    string s = "racecas";
    string t = "carrace";

    if(isAnagram(s, t)){
        printf("contains anagram.");
    }

    else{
        printf("does not contain anagram.");
    }
};
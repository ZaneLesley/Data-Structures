#include <string>
#include <cstdio>
#include <unordered_map>

using namespace std;

/*
First Thoughts:
Go through each letter in s, and look for the letter in t, if it is there remove it and keep going, if it isnt return false.

Actual Implementation:
While their are still characters in the string s, find an equal for them in string t, if we get to the end of the j loop, and no character has been found, return false.
*/

//TODO: Implement with HashMap / Counting Array

/*
Went back through and redid with HashMap
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
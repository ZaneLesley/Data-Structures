#include <string>
#include <cstdio>

using namespace std;

/*
First Thoughts:
Go through each letter in s, and look for the letter in t, if it is there remove it and keep going, if it isnt return false.

Actual Implementation:
While their are still characters in the string s, find an equal for them in string t, if we get to the end of the j loop, and no character has been found, return false.
*/
bool isAnagram(string s, string t){
    // If not same size, not an anagram.
    if(s.size() != t.size()){
        return false;
    }

    // Main Check
    while (s.size())
    {
        for(int j = 0; j < t.size(); j++){
            if(s[0] == t[j]){
                s.erase(0, 1);
                t.erase(j, 1);
                break;
            }

            if(j + 1 == t.size())
                return false;
        }
    }
    return true;
};

int main(){
    string s = "racecar";
    string t = "carrace";

    if(isAnagram(s, t)){
        printf("contains anagram.");
    }

    else{
        printf("does not contain anagram.");
    }
};
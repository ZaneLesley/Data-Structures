#include <string>

using namespace std;

bool isPalindrome(string s) {
    for(int i = 0; i < s.size(); i++)
    {
        if(isalnum(s[i]))
        {
            while(!isalnum(s.back()))
            {
                s.pop_back();
            }

            if(tolower(s[i]) == tolower(s.back()))
            {
                s.pop_back();
            } else return false;

        }
    } return true; 
}

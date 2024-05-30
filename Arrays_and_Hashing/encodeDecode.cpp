#include <vector>
#include <string>

using namespace std;

string encode(vector<string>& strs) {
    string s;
    for(string word : strs){
        for(char c : word){
            s.push_back(int(c) + 5);
        }

        s.push_back('$');
    }

    return s;
};

vector<string> decode(string s) {
    vector<string> decoded;
    string temp;
    int i = 0;
    for(char c : s){
        if(c == '$'){
            decoded.push_back(temp);
            i++;
            temp.clear();
        }

        else{
            temp.push_back(int(c) - 5);
        }
    }

    return decoded;
};

int main(){
    vector<string> s = {"my", "test", "string"};

    string t = encode(s);
    vector<string> u = decode(t.c_str());

    printf("%s", u[2].c_str());
};
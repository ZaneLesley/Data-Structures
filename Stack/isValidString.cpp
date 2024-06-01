#include <string>
#include <stack>

using namespace std;

bool isValid(string s) {
    stack<char> stack;
    for(char c : s){
        // Push Open Brackets onto stack.
        if(c == '(' || c == '{' || c == '['){
            stack.push(c);
            continue;
        }
        // If no open bracket on stack, return false.
        if(stack.empty()) return false;
        
        // Check for matching Brackets
        switch(c){
            case ']':
            if(stack.top() != '[') return false;
            break;
            case '}':
            if(stack.top() != '{') return false;
            break;
            case ')':
            if(stack.top() != '(') return false;
            break;
        }
    }
    // Stack should be empty by end of string of characaters.
    if(stack.empty()) return true;
    return false;
}
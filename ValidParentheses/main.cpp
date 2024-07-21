#include <bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<char> stack;
    for (char c : s){
        if(c == '[' || c == '(' || c == '{'){
            stack.push(c);
        }else if(stack.empty() || (c == ']' && stack.top() != '[' || c == ')' && stack.top() != '(' || c == '}' && stack.top() != '{')){
            return false;
        }else{
            stack.pop();
        }
    }
    return stack.empty();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bool condition = isValid("()");
    if(condition == true){
        cout <<"YES" <<endl;
    }
    return 0;
}
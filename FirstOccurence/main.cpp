#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string needle = "leeto";
    string haystack = "leetcode";//3
    int index = 0;
    int position = 0;
    for (int i = 0; i < haystack.length(); i++){
        if(haystack[i] == needle[position]){
            index = i;
            position++;
        }else if(position < haystack.length()){
            return -1;
        }
    }
    int wrapper = (index+1) - needle.length();
    cout << wrapper << endl;
    return 0;
}
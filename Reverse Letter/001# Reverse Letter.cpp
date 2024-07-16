#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

string reverse_letter(const std::string &str)
{
    string wrapper;
    for (int i = str.length(); i >= 0; i--){
        wrapper += str[i];
    }
    return wrapper;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << reverse_letter("hello9world");
    return 0;
}